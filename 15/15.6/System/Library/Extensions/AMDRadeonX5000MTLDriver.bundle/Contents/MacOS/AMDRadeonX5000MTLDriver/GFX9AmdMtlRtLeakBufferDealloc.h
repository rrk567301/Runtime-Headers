@interface GFX9AmdMtlRtLeakBufferDealloc : NSObject {
    void *ptr;
    unsigned long long len;
}

- (void)dealloc;

@end
