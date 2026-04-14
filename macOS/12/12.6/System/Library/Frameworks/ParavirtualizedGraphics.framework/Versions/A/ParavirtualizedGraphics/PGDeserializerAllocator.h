@interface PGDeserializerAllocator : NSObject <MTLDeserializerAllocator> {
    unsigned int _currentOffset;
    unsigned long long _length;
}

@property (readonly) void *bytes;

- (void)dealloc;
- (void)reset;
- (id)initWithSize:(unsigned long long)a0;
- (char *)allocateOperationBytes:(unsigned long long)a0;

@end
