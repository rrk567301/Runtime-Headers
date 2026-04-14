@interface WBSCopyOnWriteState : NSObject {
    unsigned long long _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)incrementCount;
- (id)init;
- (void)decrementCount;
- (id)forkIfNeededWithHandler:(id /* block */)a0;

@end
