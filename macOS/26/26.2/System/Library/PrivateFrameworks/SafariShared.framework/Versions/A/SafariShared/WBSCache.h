@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCache : NSObject {
    NSCache *_cache;
    NSMapTable *_weakObjectsTable;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)_recacheObjectForKey:(id)a0;

@end
