@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    char safe;
    char usedMalloc;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (char)beginAccessing;
- (void)endAccessing;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (id)initWithPropertyList:(void *)a0;
- (char)purgable;

@end
