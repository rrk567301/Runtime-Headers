@class NSString;

@interface RDMutex : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } pthreadLock;
    BOOL trackOwner;
}

@property (retain) NSString *whoHasTheLock;

- (int)unlock;
- (id)description;
- (int)lock;
- (id)init;
- (void)dealloc;
- (int)trylock;
- (id)initWithoutTracking;

@end
