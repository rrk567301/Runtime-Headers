@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tableLock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)copyOrSetObject:(id)a0 forKey:(id)a1;
- (id)copyObjectForKey:(id)a0;
- (void)removeObject:(id)a0 key:(id)a1;

@end
