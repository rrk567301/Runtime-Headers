@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (void)unlock;
- (void)performWithLockSync:(id /* block */)a0;
- (id)initWithOptions:(long long)a0;
- (void)lock;
- (id)init;
- (void)assertNotLocked;
- (void)assertLocked;

@end
