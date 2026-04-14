@interface CPLEngineWriteTransactionBlocker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _unblock;
}

- (id)initWithUnblockBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)unblock;
- (void)dealloc;

@end
