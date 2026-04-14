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
- (id)objectForKey:(id)a0;
- (id)initWithPolicy:(id)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (void)_setEntry:(id)a0 forKey:(id)a1;

@end
