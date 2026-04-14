@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void *)bytes;
- (unsigned long long)length;
- (BOOL)beginAccessing;
- (void)endAccessing;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (BOOL)purgable;
- (id)initWithPropertyList:(void *)a0;
- (void)dealloc;

@end
