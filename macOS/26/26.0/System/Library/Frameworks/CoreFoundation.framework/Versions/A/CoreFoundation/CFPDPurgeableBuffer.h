@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void)endAccessing;
- (void)dealloc;
- (void *)bytes;
- (BOOL)beginAccessing;
- (id)initWithPropertyList:(void *)a0;
- (BOOL)purgable;
- (unsigned long long)length;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;

@end
