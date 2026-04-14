@interface _ICNFNonBoostingLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

- (void)unlock;
- (id)init;
- (void)lock;
- (void)dealloc;

@end
