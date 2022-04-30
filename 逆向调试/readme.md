https://bbs.pediy.com/thread-272515.htm  x64dbg使用详解


> Windbg查看一个函数内部调用了那些函数 
0:000> x user32!MessageBoxW 
00007ffb`82f3cab0 USER32!MessageBoxW (MessageBoxW) 
0:000> uf /c /D 00007ffb`82f3cab0 
USER32!MessageBoxW (00007ffb`82f3cab0) 
  USER32!MessageBoxW+0x49 (00007ffb`82f3caf9): 
    call to USER32!MessageBoxTimeoutW (00007ffb`82f3c8e0) 
     
    


### 1. 禁用驱动签名保护

> bcdedit.exe /set nointegritychecks on
>
> bcdedit.exe -set loadoptions DISABLE_INTEGRITY_CHECKS
>
> bcdedit.exe -set TESTSIGNING ON



### 2. Windbg调试内核驱动

> https://www.cnblogs.com/xumaojun/p/8544168.html
>
> 网上双击调试的教程很多 这里就不废话了。
>
> 使用串口进行通信

```
bcdedit /debug on
bcdedit /dbgsettings serial debugport:2 baudrate:115200
```

### win7 配置内核调试

> bcdedit /bootdebug ON  
> bcdedit /debug ON   
> bcdedit /dbgsettings serial baudrate:115200 debugport:1  
> bcdedit /copy {current} /d DebugEntry   
> bcdedit /displayorder {current} {d3d5f290-f64b-11de-a86d-aba3805c5629}   
> bcdedit /debug {d3d5f290-f64b-11de-a86d-aba3805c5629} ON   


### Windbg调试技巧
http://www.pnpon.com/article/detail-104.html   资料

不要直接打开文件,windbg会搜索所有模块 
当配置了源文件路径后，可以通过.open命令打开源文件
.open -a module!func


### 调试环境搭建
https://www.cnblogs.com/bianchengnan/p/12527189.html
建议使用 VirtualKd  非常方便



