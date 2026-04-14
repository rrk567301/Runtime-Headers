@class NSString, TSUReadWriteQueue, NSMutableDictionary;

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)initWithName:(id)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;

@end
