# Wireshark    
> https://github.com/airbus-cert/Winshark
>  https://labs.nettitude.com/blog/etwhash-he-who-listens-shall-receive/     使用ETW 获取NET-NTLM HASH


# resources
> https://x.com/vagnerpilar/status/1315877237565071360    ETW trace knownledge

# ETW Internals
> https://windows-internals.com/exploiting-a-simple-vulnerability-part-1-5-the-info-leak/  


## ETW Provider
```
https://blog.naver.com/techshare/220637628128?viewType=pc
https://blog.naver.com/techshare/220637628128     ETW Provider   Name查找
https://github.com/libyal/winevt-kb/blob/main/docs/sources/eventlog-providers/Provider-Microsoft-Windows-Security-Auditing.md  
```

```
有关ETW 内部细节参考  Geoff Chappell的资料  
对NtTraceControl / NtTraceEvent的使用和原理都做了非常详细的介绍  
https://www.geoffchappell.com/studies/windows/km/ntoskrnl/api/etw/traceapi/control/registerumguid.htm?tx=69&ts=0,186

NtTraceControl --> (EtwEnumTraceGuidList 0x15) EtwpGetTraceGuidList  --> EtwpGetGuidList
```
