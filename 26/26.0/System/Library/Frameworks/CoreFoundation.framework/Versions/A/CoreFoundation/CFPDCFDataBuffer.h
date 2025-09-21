@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void)dealloc;
- (id)copyXPCData;
- (void *)bytes;
- (unsigned long long)length;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (struct __CFData { } *)copyCFData;

@end
