#include <ntifs.h>

#define DEVICE_NAME L"\\Device\\bopinServer"
#define SYM_NAME L"\\??\\bopinServer"

#define CODE_INDEX  0x8000
#define TEST CTL_CODE(FILE_DEVICE_UNKNOWN,CODE_INDEX,METHOD_BUFFERED,FILE_ANY_ACCESS)


NTSTATUS DefaultDispatch(
	_In_ struct _DEVICE_OBJECT* DeviceObject,
	_Inout_ struct _IRP* Irp
) {
	Irp->IoStatus.Status = STATUS_SUCCESS;
	IoCompleteRequest(Irp, IO_NO_INCREMENT);
	return STATUS_SUCCESS;
}

NTSTATUS Dispatch(
	_In_ struct _DEVICE_OBJECT* DeviceObject,
	_Inout_ struct _IRP* Irp
) {
	PIO_STACK_LOCATION ioStack = IoGetCurrentIrpStackLocation(Irp);
	ULONG ControlCode = ioStack->Parameters.DeviceIoControl.IoControlCode;
	ULONG InputBufferLength = ioStack->Parameters.DeviceIoControl.InputBufferLength;
	ULONG OutputBufferLength = ioStack->Parameters.DeviceIoControl.OutputBufferLength;
	PVOID SystemBuffer = Irp->AssociatedIrp.SystemBuffer;

	switch (ControlCode) {
	case TEST:
	{
		*(PLONG)SystemBuffer = 0x1000;
		Irp->IoStatus.Status = STATUS_SUCCESS;
		Irp->IoStatus.Information = 10;
		break;
	}

	}
	IoCompleteRequest(Irp, IO_NO_INCREMENT);
	return STATUS_SUCCESS;
}

VOID driverunload(
	_In_ struct _DRIVER_OBJECT* DriverObject
) {
	UNICODE_STRING SymlinkName;
	RtlInitUnicodeString(&SymlinkName, SYM_NAME);

	IoDeleteSymbolicLink(&SymlinkName);
	IoDeleteDevice(DriverObject->DeviceObject);
	KdPrint(("DriverUnload"));
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegPath) {
	DriverObject->DriverUnload = driverunload;

	UNICODE_STRING DeviceName;
	UNICODE_STRING SymlinkName;
	RtlInitUnicodeString(&DeviceName, DEVICE_NAME);
	RtlInitUnicodeString(&SymlinkName, SYM_NAME);

	PDEVICE_OBJECT pDevice = NULL;
	NTSTATUS status = IoCreateDevice(DriverObject, 0, &DeviceName, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, TRUE, &pDevice);
	if (!NT_SUCCESS(status)) {
		KdPrint(("Create Device Failed:%x", status));
		return STATUS_UNSUCCESSFUL;
	}

	status = IoCreateSymbolicLink(&SymlinkName, &DeviceName);
	if (!NT_SUCCESS(status)) {
		KdPrint(("Create SymbolicLink Failed:%x", status));
		IoDeleteDevice(pDevice);
		return STATUS_UNSUCCESSFUL;
	}

	DriverObject->MajorFunction[IRP_MJ_CREATE] = DefaultDispatch;
	DriverObject->MajorFunction[IRP_MJ_CLOSE] = DefaultDispatch;
	DriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL] = Dispatch;
	DriverObject->Flags |= DO_BUFFERED_IO;

	return STATUS_SUCCESS;
}
