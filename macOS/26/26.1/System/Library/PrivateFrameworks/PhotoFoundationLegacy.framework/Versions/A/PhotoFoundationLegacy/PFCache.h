@class PFCachePolicy, NSMapTable, NSObject, PFCacheStatistics;
@protocol OS_dispatch_queue;

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (id)statistics;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithPolicy:(id)a0;
- (unsigned long long)count;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (void)_setEntry:(id)a0 forKey:(id)a1;

@end
