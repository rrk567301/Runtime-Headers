@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    struct __CFData { } *handle;
    unsigned long long allocSize;
    BOOL safe;
    BOOL usedMalloc;
}

- (void *)bytes;
- (BOOL)beginAccessing;
- (BOOL)purgable;
- (unsigned long long)length;
- (void)endAccessing;
- (id)initWithPropertyList:(void *)a0;
- (id)initWithFileDescriptor:(int)a0 size:(unsigned long long)a1;
- (void)dealloc;

@end
