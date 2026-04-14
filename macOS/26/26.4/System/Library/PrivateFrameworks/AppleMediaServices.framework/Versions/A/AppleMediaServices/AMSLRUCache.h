@class NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *backingDictionary;
@property (readonly, nonatomic) AMSDoubleLinkedList *backingList;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long maxSize;

- (void)performExclusively:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)_count;
- (id)objectForKey:(id)a0 withCreationBlock:(id /* block */)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)_removeObjectForKey:(id)a0;
- (id)allObjectsAndKeys;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)objectForKey:(id)a0 canLogCacheMisses:(BOOL)a1;
- (id)description;
- (void)_addObject:(id)a0 forKey:(id)a1;

@end
