@class PFCachePolicy, NSMapTable, NSObject, PFCacheStatistics;
@protocol OS_dispatch_queue;

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)statistics;
- (id)initWithPolicy:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (void)_setEntry:(id)a0 forKey:(id)a1;

@end
