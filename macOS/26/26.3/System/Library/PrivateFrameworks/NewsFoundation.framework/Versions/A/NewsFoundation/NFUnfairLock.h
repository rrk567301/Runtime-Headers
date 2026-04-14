@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (void)assertLocked;
- (id)initWithOptions:(long long)a0;
- (id)init;
- (void)assertNotLocked;
- (void)unlock;
- (void)performWithLockSync:(id /* block */)a0;
- (void)lock;

@end
