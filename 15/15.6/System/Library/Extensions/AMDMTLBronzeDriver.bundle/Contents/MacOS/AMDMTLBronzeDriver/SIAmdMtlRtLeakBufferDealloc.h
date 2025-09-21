@interface SIAmdMtlRtLeakBufferDealloc : NSObject {
    void *ptr;
    unsigned long long len;
}

- (void)dealloc;

@end
