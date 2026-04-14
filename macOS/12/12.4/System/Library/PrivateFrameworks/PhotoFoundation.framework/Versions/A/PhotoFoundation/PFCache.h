@class PFCachePolicy, NSMapTable, NSObject, PFCacheStatistics;
@protocol OS_dispatch_queue;

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)statistics;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)initWithPolicy:(id)a0;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (void)_setEntry:(id)a0 forKey:(id)a1;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;

@end
