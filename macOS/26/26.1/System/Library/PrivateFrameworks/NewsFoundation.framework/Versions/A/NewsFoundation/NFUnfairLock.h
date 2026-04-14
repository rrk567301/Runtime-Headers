@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (void)unlock;
- (id)initWithOptions:(long long)a0;
- (void)lock;
- (void)performWithLockSync:(id /* block */)a0;
- (void)assertNotLocked;
- (void)assertLocked;
- (id)init;

@end
