@interface PLXPCShMemData : NSData {
    void *_buffer;
    unsigned long long _dataLength;
    unsigned long long _bufferLength;
}

- (void)dealloc;
- (const void *)bytes;
- (id)description;
- (unsigned long long)length;
- (id)initWithXPCShmem:(id)a0;
- (id)initWithXPCShmem:(id)a0 length:(long long)a1;

@end
