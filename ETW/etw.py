#
# IDA headless .rdata section search  const EVENT_DESCRIPTOR
#
import idautils
import idc
import os
import ida_search
import ida_idaapi
import ida_ida
import ida_bytes
import pefile
from typing import List
from datetime import datetime

def get_name(tag,ea):
    for _ea,name in idautils.Names():
        if _ea == ea:
            return f'{tag} {name}'

def search_text(arg_search_for: str,
                arg_search_direction_down: bool = True,
                arg_search_is_regex: bool = False,
                arg_start_ea: int = 0,
                arg_max_hits: int = 1,
                arg_debug: bool = False) -> List:
    res = []
    l_max_hits = arg_max_hits
    #print(f'{ida_ida.inf_get_min_ea()}   {ida_ida.inf_get_max_ea()}')
    l_min_ea = arg_start_ea if arg_start_ea else ida_ida.inf_get_min_ea()

    l_search_flags = ida_search.SEARCH_DOWN if arg_search_direction_down else ida_search.SEARCH_UP
    l_search_flags |= ida_search.SEARCH_NEXT
    l_search_flags |= ida_search.SEARCH_BRK # return BADADDR if the search was cancelled
    if arg_search_is_regex:
        l_search_flags |= ida_search.SEARCH_REGEX
    l_start_next_search_at = l_min_ea
    while True:
        l_useless_y: int = 0
        l_useless_x: int = 0
        if arg_debug:
            print(f"Calling ida_search.find_text(0x{l_start_next_search_at:x}, {l_useless_y}, {l_useless_x}, '{arg_search_for}', {l_search_flags})")
        l_start_next_search_at = ida_search.find_text(l_start_next_search_at, l_useless_y, l_useless_x, arg_search_for, l_search_flags)
        if arg_debug:
            print(f"result from ida_search.find_text(): 0x{l_start_next_search_at:x}")
        if l_start_next_search_at == ida_idaapi.BADADDR:
            break
        res.append(get_name(arg_search_for,l_start_next_search_at))
        # Here is the fix:
        l_start_next_search_at = ida_bytes.get_item_end(l_start_next_search_at) if arg_search_direction_down else (ida_bytes.get_item_head(l_start_next_search_at) - 1)
        if l_max_hits != -1:
            l_max_hits -= 1
            if l_max_hits == 0:
                break
        else:
            if l_start_next_search_at == ida_ida.inf_get_max_ea():
                break
    return res

def get_current_filename():
    full_path = idc.get_input_file_path()
    filename = os.path.basename(full_path)
    return filename

DEBUG = True
class Log():
    def write(self,msg : str):
        print(msg.strip('\n'))

class ETWOperation:
    def __init__(self,
                 ):
        self.filename = f'win1124h2_26100.3775-{get_current_filename()}_ETWDESCRIPTOR.log'
        self.file = Log()
        self.reversefile = idc.get_input_file_path()
        self.pefile = pefile.PE(self.reversefile, fast_load=True)

    def _write_metadata(self):
        self.file.write(f'filename: {self.reversefile}\n')
        self.file.write(f'datetime: {datetime.now()}\n')

    def _write_content(self):
        results = search_text('const EVENT_DESCRIPTOR',arg_max_hits=-1)
        self.file.write(f'ETW Descriptor Number: {len(results)}\n')
        for n in results:
            self.file.write(f'{n}\n')

    def run(self):
        self._write_metadata()
        self._write_content()

class my_plugin_t(ida_idaapi.plugin_t):
    flags = ida_idaapi.PLUGIN_KEEP
    wanted_name = 'IDA ETW Descriptor'
    wanted_hotkey = ''
    comment = 'IDA ETW EVENT DESCRIPTOR Search'
    help = ''

    def init(self):
        print('etw plugin init')
        return ida_idaapi.PLUGIN_KEEP

    def term(self):
        print('etw plugin uninit')

    def run(self,arg):
        ETWOperation().run()

def PLUGIN_ENTRY():
    return my_plugin_t()
