@interface ICRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (id)init;
- (void)unlock;
- (void)writeLock;
- (void)dealloc;
- (void)readLock;
- (int)tryReadLock;

@end
