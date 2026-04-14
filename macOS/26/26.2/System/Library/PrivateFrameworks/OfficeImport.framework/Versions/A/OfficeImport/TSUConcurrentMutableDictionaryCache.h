@class OITSUReadWriteQueue, NSMutableDictionary, NSString;

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}

@property (readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;

@end
