@class NSMutableArray, PKLRUCacheItem, NSMapTable;

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    NSMutableArray *_freeKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) unsigned long long totalCostLimit;
@property (nonatomic) long long freeItemCount;
@property (readonly, nonatomic) long long freeKeyCount;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)allObjects;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)_removeItem:(id)a0;
- (void)removeObjectForKey:(id)a0 scaleFactor:(long long)a1;
- (void)_addItem:(id)a0;
- (id)_keyItemForKey:(id)a0 scaleFactor:(long long)a1;
- (id)checkObjectForKey:(id)a0;
- (id)objectForKey:(id)a0 scaleFactor:(long long)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 scaleFactor:(long long)a3;

@end
