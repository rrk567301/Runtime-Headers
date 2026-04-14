@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void *)bytes;
- (unsigned long long)length;
- (id)initWithPropertyList:(void *)a0;
- (void)endAccessing;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)purgable;
- (BOOL)beginAccessing;

@end
