@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)assertCurrentThreadIsNotOwner;
- (id)description;
- (id)init;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (void)assertCurrentThreadIsOwner;

@end
