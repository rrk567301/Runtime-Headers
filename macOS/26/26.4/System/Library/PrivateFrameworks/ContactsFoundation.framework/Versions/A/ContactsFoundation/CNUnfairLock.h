@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (void)unlock;
- (void)assertCurrentThreadIsNotOwner;
- (id)init;
- (id)description;
- (void)assertCurrentThreadIsOwner;
- (BOOL)tryLock;
- (void)lock;

@end
