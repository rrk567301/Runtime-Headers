@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject {
    NSMutableDictionary *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _OFLRUCacheList { unsigned long long x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *_leastRecentUsedList;
    NSMutableDictionary *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (void)dealloc;
- (id)init;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (char)writeToURL:(id)a0;
- (char)loadFromURL:(id)a0;
- (void)_promoteListElement:(struct _OFLRUCacheListElement { id x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *)a0;
- (void)_removeListElement:(struct _OFLRUCacheListElement { id x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *)a0;
- (void)evictSlots:(unsigned long long)a0;

@end
