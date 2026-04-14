@class NSIndexSet, NSMutableArray;

@interface _NSLazyFetchingArray : NSMutableArray {
    NSMutableArray *_objects;
    NSIndexSet *_fetchedIndexes;
    unsigned long long _batchSize;
    id _owner;
    BOOL _shouldFetchAllRanges;
    BOOL _hasChanges;
    BOOL _madeMutable;
}

- (id)mutableCopy;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (unsigned long long)count;
- (void)setOwner:(id)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)init;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (void)dealloc;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectIdenticalTo:(id)a0;
- (void)setArray:(id)a0;
- (void)filterUsingPredicate:(id)a0;
- (void)sortUsingDescriptors:(id)a0;
- (void)_contextDidSave;
- (void)_fetchAllRanges;
- (id)_fetchedIndexes;
- (void)_ensureContentArrayIsMutable;
- (void)_fetchBatchForIndexes:(id)a0;
- (void)_sortUsingDescriptors:(id)a0;
- (id)_underlyingArrayObjectAtIndex:(unsigned long long)a0;
- (void)addObjectsIDsFromArray:(id)a0;
- (void)contextDidSave;
- (void)setShouldFetchAllRanges:(BOOL)a0;
- (void)updateBatchSizeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
