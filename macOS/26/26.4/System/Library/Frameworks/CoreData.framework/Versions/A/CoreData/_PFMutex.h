@interface _PFMutex : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (void)initialize;

- (void)unlock;
- (id)init;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;

@end
