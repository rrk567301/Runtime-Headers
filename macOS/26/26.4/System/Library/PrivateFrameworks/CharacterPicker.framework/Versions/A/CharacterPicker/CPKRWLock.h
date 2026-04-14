@interface CPKRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlockPtr;
}

@property BOOL flag;

- (void)unlock;
- (id)init;
- (void)dealloc;
- (void)lockAsWriter:(BOOL)a0;

@end
