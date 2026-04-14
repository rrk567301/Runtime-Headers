@class CSMemoryMapping;

@interface CSMemoryMappingSlice : NSObject {
    struct _CSRange { unsigned long long location; unsigned long long length; } _remoteSliceRange;
}

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) CSMemoryMapping *underlyingMapping;
@property (readonly, nonatomic) const void *unsafeBytes;

- (void)withBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)copyBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 to:(void *)a2;
- (id)initWithUnderlyingMapping:(id)a0 remoteStart:(unsigned long long)a1 remoteSize:(unsigned long long)a2;
- (id)sliceFromAddress:(unsigned long long)a0;
- (void)withBytes:(id /* block */)a0;

@end
