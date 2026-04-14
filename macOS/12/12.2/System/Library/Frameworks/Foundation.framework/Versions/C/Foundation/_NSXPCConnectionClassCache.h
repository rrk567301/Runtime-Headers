@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableSet *_cache;
}

- (void)dealloc;
- (id)init;

@end
