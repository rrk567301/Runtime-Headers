@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (struct __CFData { } *)copyCFData;
- (void *)bytes;
- (unsigned long long)length;
- (id)copyXPCData;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (void)dealloc;

@end
