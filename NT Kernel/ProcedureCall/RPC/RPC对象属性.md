

```c
// 端点
typedef struct Endpoint
{
	USHORT ProtseqType;			// 该端点的协议串类型
    int Status;					// 端点活跃状态   allocated已分配;active活跃的  inactive 不活跃的
    char EndpointName[28];				// 端点名称的前28个字符
}
```

```c
// 线程
typedef struct Thread
{
	int Status;						// 线程状态 processing,dispatched,allocated,idle
    ULONG_PTR LastUpdateTimer;		// 上次更新时间（系统启动后的毫秒数）
    int TID;						// 线程ID
}
```

```c
// 连接
typedef struct Connect
{
    int Flags;				// 标志，指示是否为互斥模式exclusive/non-exclusive; 认证级别和认证服务状态
    int LastTransmitFragmentSize;// 通过此连接传输的上一个数据片的大小
    int Endpoint;			// 所属端点的蜂巢ID
    ULONG_PTR LastSendTime;	// 上次发送时间
    ULONG_PTR LastReceiveTime;		// 上次接收时间
}
```

```c
// 服务器端调用
typedef struct SCALL
{
    int status;		// 调用状态  allocated已分配，活跃active RPC运行时正在处理; 已分发dispatched 服务函数已经调用
    																		// 尚未返回
    int ProcNum;	// 过程序号 procedure number  调用函数在接口中的序号 从0开始
    DWORD InterfaceUUIDStart;	// 接口的第一个DWORD
    int ServicingTID;		// 服务线程的蜂巢ID，如果调用状态不是活跃或者已分配，那么此信息有误
    int CallFlags;			// 调用标志 指示是否被缓存的调用cache call,异步调用，管道调用，LRPC或OSF调用   
    ULONG_PTR LastUpdateTime;   // 上次更新时间
    int PID;			// 调用者的进程ID 仅当LRPC时有效
    int TID;			// 调用者线程ID
}
```



```c
// 服务器端调用
typedef struct CCALL
{
    int ProcNum;		// 被调用方法的过程序号
    int ServicingThread;	// 发起调用的工作线程的蜂巢ID
    int IfStart;		// 接口UUID的第一个DWORD
    char Endpoint[12];	// 调用的服务器端端点名字的前12个字符
    ProtocolSequence;		// 协议串
	ULONG_PTR LastUpdateTime;   // 
    char TargetServer[24];	// 服务器名称的前24个字符
}
```



