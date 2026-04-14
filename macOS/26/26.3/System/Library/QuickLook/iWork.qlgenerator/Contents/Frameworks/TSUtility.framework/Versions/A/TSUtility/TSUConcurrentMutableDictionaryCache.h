@class NSString, TSUReadWriteQueue, NSMutableDictionary;

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeObjectsForKeys:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
