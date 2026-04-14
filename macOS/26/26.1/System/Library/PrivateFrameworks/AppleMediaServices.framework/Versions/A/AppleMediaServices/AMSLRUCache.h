@class NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *backingDictionary;
@property (readonly, nonatomic) AMSDoubleLinkedList *backingList;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long maxSize;

- (void)performExclusively:(id /* block */)a0;
- (id)objectForKey:(id)a0 withCreationBlock:(id /* block */)a1;
- (void)removeAllObjects;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)allObjectsAndKeys;
- (id)description;
- (void)_addObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 canLogCacheMisses:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)_count;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)_removeObjectForKey:(id)a0;

@end
