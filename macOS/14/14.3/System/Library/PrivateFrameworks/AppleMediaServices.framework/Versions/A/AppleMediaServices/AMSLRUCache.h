@class AMSDoubleLinkedList, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject

@property (retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) AMSDoubleLinkedList *backingList;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long maxSize;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_count;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 canLogCacheMisses:(BOOL)a1;
- (id)objectForKey:(id)a0 withCreationBlock:(id /* block */)a1;
- (void)_addObject:(id)a0 forKey:(id)a1;
- (void)_removeObjectForKey:(id)a0;
- (id)allObjectsAndKeys;
- (id)initWithMaxSize:(unsigned long long)a0;

@end
