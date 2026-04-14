@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void)dealloc;
- (unsigned long long)length;
- (void *)bytes;
- (struct __CFData { } *)copyCFData;
- (id)copyXPCData;
- (id)initWithCFData:(struct __CFData { } *)a0;

@end
