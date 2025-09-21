@interface RCMutexLock : NSObject <RCLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)unlock;
- (void)dealloc;
- (void)performWithLockSync:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)lock;
- (id)init;

@end
