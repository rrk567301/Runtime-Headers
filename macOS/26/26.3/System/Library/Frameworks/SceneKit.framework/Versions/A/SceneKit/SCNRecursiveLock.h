@interface SCNRecursiveLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

- (id)init;
- (void)unlock;
- (void)lock;
- (void)dealloc;

@end
