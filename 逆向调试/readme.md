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

