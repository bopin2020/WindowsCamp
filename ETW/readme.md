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
NtTraceControl --> (EtwEnumTraceGuidList 0x15) EtwpGetTraceGuidList  --> EtwpGetGuidList
```
