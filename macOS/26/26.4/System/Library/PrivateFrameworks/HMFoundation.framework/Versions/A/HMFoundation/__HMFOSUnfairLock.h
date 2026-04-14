@interface __HMFOSUnfairLock : HMFUnfairLock {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internal;
    unsigned int _internalOptions;
}

- (void)unlock;
- (void)assertOwner;
- (void)assertNotOwner;
- (id)initWithOptions:(unsigned long long)a0;
- (void)performBlock:(id /* block */)a0;
- (void)lock;

@end
