@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } *data;
}

- (void *)bytes;
- (id)copyXPCData;
- (unsigned long long)length;
- (struct __CFData { } *)copyCFData;
- (id)initWithCFData:(struct __CFData { } *)a0;
- (void)dealloc;

@end
