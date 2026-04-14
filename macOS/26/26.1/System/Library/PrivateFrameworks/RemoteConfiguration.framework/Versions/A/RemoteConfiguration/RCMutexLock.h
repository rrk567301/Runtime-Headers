@interface RCMutexLock : NSObject <RCLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)unlock;
- (id)initWithOptions:(unsigned long long)a0;
- (void)lock;
- (void)dealloc;
- (void)performWithLockSync:(id /* block */)a0;
- (id)init;

@end
