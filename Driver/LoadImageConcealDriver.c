/*
https://bbs.pediy.com/thread-274872.htm
*/
#include <ntddk.h>
#include <intrin.h>
#include <ntimage.h>

#define MAX_PATH 256

KIRQL WP_OFF64()
{
	// KfRaiseIrql
	KIRQL irql = KeRaiseIrqlToDpcLevel();  // DPC_LEVEL DISSPATCH_LEVEL 线程调度器或延迟过程调用级别
	/// <summary>
	/// https://learn.microsoft.com/bs-latn-ba/cpp/intrinsics/readcr0?view=msvc-160
	/// 读取cr0 控制寄存器的值
	/// _writecr0
	/// </summary>
	/// <returns></returns>
	UINT64 cr0 = __readcr0();
	cr0 &= 0xfffffffffffeffff;
	/// <summary>
	/// https://learn.microsoft.com/en-us/cpp/intrinsics/disable?view=msvc-170
	/// Disable the interupt
	/// 禁用处理器清除中断标志
	/// </summary>
	/// <returns></returns>
	_disable();
	__writecr0(cr0);
	return irql;
}

/// <summary>
/// 开启写 保护
/// </summary>
/// <param name="irqp"></param>
VOID WP_ON64(KIRQL irql)
{
	UINT64 cr0 = __readcr0();
	cr0 |= 0x10000;
	/// <summary>
	/// https://learn.microsoft.com/en-us/cpp/intrinsics/enable?view=msvc-170
	/// enable interupt 开启中断
	/// </summary>
	/// <param name="irqp"></param>
	_enable();
	__writecr0(cr0);
	KeLowerIrql(irql);
}


BOOLEAN DenyLoadDriver(PVOID PDriverEntry)
{
	/*
	0x1000: mov     eax, 0xc0000022
	0x1005: ret
	*/
	UCHAR blockCode[] = "\xB8\x22\x00\x00\xC0\xC3";
	KIRQL kirql;
	if (PDriverEntry == NULL) { DbgPrint("driver entry is null"); return FALSE; }
	// 关闭写保护
	kirql = WP_OFF64();
	DbgPrint("写保护关闭");
	// memory patch
	DbgPrint("memory patching...");
	memcpy(PDriverEntry, blockCode, sizeof(blockCode) / sizeof(blockCode[0]));
	WP_ON64(kirql);
	DbgPrint("写保护开启");
	return TRUE;
}



VOID UnicodeToChar(PUNICODE_STRING src,char* dst)
{
	ANSI_STRING string;
	RtlUnicodeStringToAnsiString(&string,src,TRUE);
	strcpy(dst,string.Buffer);
	RtlFreeAnsiString(&string);
}


/// <summary>
/// PE解析 通过加载基地址 获取驱动入口地址
/// </summary>
/// <param name="ImageBase"></param>
/// <returns></returns>
PVOID GetDriverEntryByImageBase(PVOID ImageBase)
{
	PIMAGE_DOS_HEADER dosHeader;
	PIMAGE_NT_HEADERS ntHeader;
	
	dosHeader = (PIMAGE_DOS_HEADER)ImageBase;

	ntHeader = (PIMAGE_NT_HEADERS)((DWORD_PTR)ImageBase + dosHeader->e_lfanew);

	// 返回驱动入口地址
	return (PVOID)((DWORD_PTR)ImageBase + ntHeader->OptionalHeader.AddressOfEntryPoint);
}


/// <summary>
/// PsSetLoadImageNotifyRoutine
/// PsRemoveLoadImageNotifyRoutine 通知回调
/// </summary>
VOID LoadImageNotifyRoutineCallback(PUNICODE_STRING FullImageName,HANDLE ModuleStyle,PIMAGE_INFO ImageInfo)
{
	PVOID pDrvEntry;
	char szFullImageName[MAX_PATH] = { 0 };
	/// <summary>
	/// MmIsAddressValid
	/// 给定一个虚拟地址 当读写操作发生时 是否会发生页错误
	/// 参数是一个非分页虚拟地址    （驱动中定义的变量 分配的是虚拟地址）
	/// 调用者必须确保该虚拟地址不能被分页或者被删除(使用中)
	/// 
	/// 没有页错误发生时   返回TRUE
	/// 该函数的 IRQL <= DISPATCH_LEVEL
	/// 
	/// https://www.cnblogs.com/Ox9A82/p/5571217.html
	/// MmIsAddressValid  PDE PTE查找   内存标志位 Valid
	/// </summary>
	/// <param name="FullImageName"></param>
	/// <param name="ModuleStyle"></param>
	/// <param name="ImageInfo"></param>
	if (FullImageName != NULL && MmIsAddressValid(FullImageName))
	{
		/// <summary>
		/// DbgPrint 向内核调试器发送一条消息
		/// PASSIVE_LEVEL
		/// </summary>
		/// <param name="FullImageName"></param>
		/// <param name="ModuleStyle"></param>
		/// <param name="ImageInfo"></param>
		
		DbgPrint("virtual address is :\t0x%wp", FullImageName);
		DbgPrint("%d", ModuleStyle);
		/// <summary>
		/// ModuleStyle 为0表示加载驱动
		/// </summary>
		/// <param name="FullImageName"></param>
		/// <param name="ModuleStyle"></param>
		/// <param name="ImageInfo"></param>
		if (ModuleStyle == 0)
		{
			// 获取驱动加载地址
			pDrvEntry = GetDriverEntryByImageBase(ImageInfo->ImageBase);
			UnicodeToChar(FullImageName,szFullImageName);
			DbgPrint("driver address is :\t0x%p name is %s", pDrvEntry, szFullImageName);

			/// <summary>
			/// _strlwr 转换为小写
			/// strstr 第二个字符串是否包含在第一个里面
			/// </summary>
			/// <param name="FullImageName"></param>
			/// <param name="ModuleStyle"></param>
			/// <param name="ImageInfo"></param>
			if (strstr(_strlwr(szFullImageName), "ccamp.sys"))
			{
				DbgPrint("block kernel image %s", szFullImageName);
				if (DenyLoadDriver(pDrvEntry))
				{
					DbgPrint("block 驱动CCamp.sys加载");
				}
			}
		}
	}
}

VOID DriverUnload(PDRIVER_OBJECT Driver)
{
	DbgPrint("conceal uninstalled");
	PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)LoadImageNotifyRoutineCallback);
	DbgPrint("conceal uninstalled successfully");
}

NTSTATUS DriverEntry(IN PDRIVER_OBJECT Driver, PUNICODE_STRING RegisterPath)
{
	DbgPrint("conceal init");
	/// <summary>
	/// https://learn.microsoft.com/en-us/windows-hardware/drivers/ddi/ntddk/nf-ntddk-pssetloadimagenotifyroutine?source=recommendations
	/// PsSetLoadImageNotifyRoutine
	/// IRQL PASSIVE_LEVEL
	/// </summary>
	/// <param name="Driver"></param>
	/// <param name="RegisterPath"></param>
	/// <returns></returns>
	PsSetLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)LoadImageNotifyRoutineCallback);
	DbgPrint("conceal init successfully");
	Driver->DriverUnload = DriverUnload;
	return STATUS_SUCCESS;
}
