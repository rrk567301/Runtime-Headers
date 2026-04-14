@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void *)bytes;
- (unsigned long long)length;
- (id)copyXPCData;
- (struct __CFData { } *)copyCFData;
- (void)dealloc;
- (id)initWithCFData:(struct __CFData { } *)a0;

@end
