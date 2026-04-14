@interface _ICNFNonBoostingLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

- (id)init;
- (void)unlock;
- (void)lock;
- (void)dealloc;

@end
