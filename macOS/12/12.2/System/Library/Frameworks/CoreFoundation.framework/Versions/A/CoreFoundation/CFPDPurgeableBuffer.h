@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (id)initWithPropertyList:(void *)a0;
- (BOOL)beginAccessing;
- (void)endAccessing;
- (BOOL)purgable;

@end
