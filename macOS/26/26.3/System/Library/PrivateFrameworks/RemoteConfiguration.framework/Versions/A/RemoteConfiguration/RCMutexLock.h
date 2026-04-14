@interface RCMutexLock : NSObject <RCLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (void)unlock;
- (void)performWithLockSync:(id /* block */)a0;
- (void)lock;
- (void)dealloc;

@end
