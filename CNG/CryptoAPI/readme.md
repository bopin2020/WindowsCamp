# 
> microsoft legacy cryptoAPI    wincrypt.h
> https://github.com/gentilkiwi/mimikatz/blob/master/mimikatz/modules/kuhl_m_crypto.c  


## hex dump using windows api  
```
void hex_dump(void* buffer, size_t size) {
    DWORD len = 0;
    if (CryptBinaryToStringA(&buffer, size, CRYPT_STRING_HEXASCII, NULL, &len)) {
        void* buffer = malloc(len);
        if (CryptBinaryToStringA(&buffer, size, CRYPT_STRING_HEXASCII, buffer, &len)) {
            printf("%s\n", (BYTE*)buffer);
        }
        free(buffer);
    }
}
```
