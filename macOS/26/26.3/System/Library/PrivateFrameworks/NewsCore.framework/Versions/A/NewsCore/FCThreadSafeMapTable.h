@class NSMapTable, NFUnfairLock;

@interface FCThreadSafeMapTable : NSObject {
    NFUnfairLock *_lock;
    NSMapTable *_mapTable;
}

@property (readonly) unsigned long long count;

+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)strongToWeakObjectsMapTable;

- (void)readWithAccessor:(id /* block */)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)subdictionaryForKeys:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)subdictionaryForKeys:(id)a0 passingTest:(id /* block */)a1;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)removeAllObjects;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;

@end
