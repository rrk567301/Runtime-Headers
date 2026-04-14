@interface CSMemoryMapping : NSObject {
    unsigned int _accessCount;
}

@property (readonly, nonatomic) unsigned long long remoteBaseAddress;
@property (readonly, nonatomic) unsigned long long localMappedAddress;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL isBackedBySelfTask;
@property (readonly, nonatomic) struct _CSRange { unsigned long long x0; unsigned long long x1; } remoteRange;

- (void)withBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 block:(id /* block */)a2;
- (void)dealloc;
- (void)copyBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 to:(void *)a2;
- (unsigned long long)lengthAfterAddress:(unsigned long long)a0;
- (unsigned long long)localAddressForRemoteAddress:(unsigned long long)a0;
- (id)sliceFromAddress:(unsigned long long)a0;
- (id)sliceFromAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (const void *)tryGettingUnsafeBytesForAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (const void *)unsafeBytesForAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (const void *)unsafeBytesForAddress:(unsigned long long)a0 size:(unsigned long long)a1 outTrailingSize:(unsigned long long *)a2;

@end
