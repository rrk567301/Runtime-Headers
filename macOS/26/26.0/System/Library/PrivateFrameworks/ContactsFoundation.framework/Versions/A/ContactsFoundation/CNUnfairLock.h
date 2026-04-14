@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)unlock;
- (void)lock;
- (id)init;
- (void)assertCurrentThreadIsOwner;
- (id)description;
- (BOOL)tryLock;
- (void)assertCurrentThreadIsNotOwner;

@end
