@class NSMapTable, NSRecursiveLock;

@interface MOLRUCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _MOLRUCacheList { unsigned long long x0; struct _MOLRUCacheListElement *x1; struct _MOLRUCacheListElement *x2; } *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (void)_promoteListElement:(struct _MOLRUCacheListElement { id x0; struct _MOLRUCacheListElement *x1; struct _MOLRUCacheListElement *x2; } *)a0;
- (id)allKeys;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (void)evictSlots:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_removeListElement:(struct _MOLRUCacheListElement { id x0; struct _MOLRUCacheListElement *x1; struct _MOLRUCacheListElement *x2; } *)a0;

@end
