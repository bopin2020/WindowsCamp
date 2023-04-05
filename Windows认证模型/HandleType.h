// NtQuerySystemInformation 枚举全局句柄表 搜索句柄类型，权限，句柄值
// https://github.com/CLRDivingNET/AllTools
// Kernel Object Viewer
typedef enum HANDLETYPE
{
    Type = 2,
    Directory = 3,
    SymbolicLink = 4,
    Token = 5,
    Job = 6,
    Process = 7,
    Thread = 8,         
    Partition = 9,        // 存储分区
    UserApcReserve = 10,
    IoCompletionReserve = 11,
    ActivityReference = 12,
    ProcessStateChange = 13,
    ThreadStateChange = 14,
    PsSiloContextPaged = 15,
    PsSiloContextNonPaged = 16,
    DebugObject = 17,
    Event = 18,         // \KernelObjects
    Mutant = 19,
    Callback = 20,
    Semaphore = 21,     // \BaseNamedObject
    Timer = 22,
    IRTimer = 23,		// Idle Resilient Timers (UWP)
    Profile = 24,		// 基于Profiling API 从IP捕获追踪执行细节
    KeyedEvent = 25,		// 
    WindowStation = 26, // \Window\WindowStations\Winsta0
    Desktop = 27,       // \Default
    Composition = 28,	
    RawInputManager = 29,
    CoreMessaging = 30,
    ActivationObject = 31,
    TpWorkerFactory = 32,
    Adapter = 33,
    Controller = 34,
    Device = 35,
    Driver = 36,
    IoCompletion = 37,
    WaitCompletionPacket = 38,
    File = 39,
    IoRing = 40,
    /*
    41-44
    Kernel Transaction Manager(KTM) 使用这些对象处理各种transactions enlistment
    CreateTransactionManager
    CreateResourceManager
    CreateTransaction
    CreateEnlistment
    */
    TmTm = 41,			// Transaction Manager
    TmTx = 42,			// Transaction
    TmRm = 43,			// Resource Manager
    TmEn = 44,			// Enlistment
    /*
    A region of shared memory 
    Windows上也叫文件映射对象
    */
    Section = 45,       // \\BaseNamedObject
    /*
    交互式用户会话  由内存管理器视图表示的一个对象
    处理IO管理器的消息 例如连接，断开，登录，注销等第三方驱动的消息
    */
    Session = 46,
    Key = 47,
    RegistryTransaction = 48,
    ALPCPort = 49,      // \RPC Control\LRPC
	EnergyTracker = 50,
    PowerRequest = 51,
    /*
    由Windows Management Instrumentation (WMI)
    管理的对象
    
    WMI Data Block (GUID)
    
    kernel mode =>  IoWMIOpenBlock
    */
    WmiGuid = 52,
    EtwRegistration = 53,
    EtwSessionDemuxEntry = 54,
    EtwConsumer = 55,
    CoverageSampler = 56,
    DmaAdapter = 57,
    PcwObject = 58,
    FilterConnectionPort = 59,
    FilterCommunicationPort = 60,
    NdisCmState =  61,
    DxgkSharedResource = 62,
    DxgkSharedKeyedMutexObject = 63,
    DxgkSharedSyncObject = 64,
    DxgkSharedSwapChainObject = 65,
    DxgkSharedManagerObject = 66,
    DxgkSharedProtectedSessionObjct = 67,
    DxgkSharedBundleObject = 68,
    DxgkCompositionObject = 69,
    VRegConfigurationContext = 70
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
