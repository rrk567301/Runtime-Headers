@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCache : NSObject {
    NSCache *_cache;
    NSMapTable *_weakObjectsTable;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)_recacheObjectForKey:(id)a0;

@end
