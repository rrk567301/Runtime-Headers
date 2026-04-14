@class NSArray, NSHashTable, NFUnfairLock;

@interface FCThreadSafeHashTable : NSObject {
    NFUnfairLock *_lock;
    NSHashTable *_hashTable;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;

+ (id)hashTableWithOptions:(unsigned long long)a0;

- (void)removeObject:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
