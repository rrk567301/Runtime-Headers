@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (id)initWithCFData:(struct __CFData { } *)a0;
- (void *)bytes;
- (unsigned long long)length;
- (struct __CFData { } *)copyCFData;
- (id)copyXPCData;
- (void)dealloc;

@end
