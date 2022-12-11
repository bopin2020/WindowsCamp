// NtQuerySystemInformation 枚举全局句柄表 搜索句柄类型，权限，句柄值
typedef enum HANDLETYPE
{
    Directory = 3,
    Token = 5,
    Job = 6,
    Process = 7,
    Thread = 8,         // 
    Partition = 9,        // 存储分区
    Event = 18,         // \KernelObjects
    Mutant = 19,
    Semaphore = 21,     // \BaseNamedObject
    WindowStation = 26, // \Window\WindowStations\Winsta0
    Desktop = 27,       // \Default
    File = 39,
    Section = 45,       // \\BaseNamedObject
    RegisterKey = 47,
    ALPCPort = 49,      // \RPC Control\LRPC

};


typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO
{
    USHORT UniqueProcessId;
    USHORT CreatorBackTraceIndex;
    UCHAR ObjectTypeIndex;
    UCHAR HandleAttributes;
    USHORT HandleValue;
    PVOID Object;
    // https://learn.microsoft.com/en-us/windows/win32/secauthz/access-mask
    ULONG GrantedAccess;
} SYSTEM_HANDLE_TABLE_ENTRY_INFO, * PSYSTEM_HANDLE_TABLE_ENTRY_INFO;
