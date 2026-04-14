@interface CABatchInfo : NSObject {
    unsigned long long _batch_name;
    unsigned int _port;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)newBatchHandle;
- (id)newXPCBatchHandle;

@end
