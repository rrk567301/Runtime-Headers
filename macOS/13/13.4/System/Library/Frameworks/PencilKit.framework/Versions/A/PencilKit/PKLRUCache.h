@class PKLRUCacheItem, NSMapTable;

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) unsigned long long totalCostLimit;
@property (nonatomic) long long freeItemCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)allObjects;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)_removeItem:(id)a0;
- (void)_addItem:(id)a0;

@end
