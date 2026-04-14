@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (id)description;
- (void)assertCurrentThreadIsOwner;
- (void)assertCurrentThreadIsNotOwner;
- (id)init;

@end
