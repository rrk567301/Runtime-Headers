@interface GCDAsyncSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)availableSpace;
- (void)reset;
- (char *)readBuffer;
- (unsigned long long)availableBytes;
- (void)dealloc;
- (char *)writeBuffer;
- (void)didRead:(unsigned long long)a0;
- (void)didWrite:(unsigned long long)a0;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)getReadBuffer:(char **)a0 availableBytes:(unsigned long long *)a1;
- (void)getWriteBuffer:(char **)a0 availableSpace:(unsigned long long *)a1;

@end
