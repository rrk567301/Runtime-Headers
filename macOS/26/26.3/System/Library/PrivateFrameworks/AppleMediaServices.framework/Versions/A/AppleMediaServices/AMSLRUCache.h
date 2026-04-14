@class NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *backingDictionary;
@property (readonly, nonatomic) AMSDoubleLinkedList *backingList;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long maxSize;

- (id)objectForKey:(id)a0 withCreationBlock:(id /* block */)a1;
- (void)_removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)description;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_addObject:(id)a0 forKey:(id)a1;
- (unsigned long long)_count;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allObjectsAndKeys;
- (void)performExclusively:(id /* block */)a0;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0 canLogCacheMisses:(BOOL)a1;

@end
