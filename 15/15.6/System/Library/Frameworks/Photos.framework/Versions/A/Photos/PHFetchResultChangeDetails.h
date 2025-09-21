@class NSIndexSet, PHFetchResult, NSArray, PLSortedChangedObjects;

@interface PHFetchResultChangeDetails : NSObject {
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousObjects;
    NSArray *_currentObjects;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray { } *_movedFromIndexes;
    PLSortedChangedObjects *_sortedChangedIdentifiers;
    NSIndexSet *_changedIndexes;
    char _skipIncrementalChanges;
}

@property (readonly, nonatomic) PLSortedChangedObjects *sortedChangedIdentifiers;
@property (readonly, nonatomic) NSIndexSet *movedIndexes;
@property (readonly, nonatomic) struct __CFArray { } *movedFromIndexes;
@property (readonly, nonatomic) char hasAnyChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) char hasIncrementalChanges;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) char hasMoves;

+ (id)_identifiersForPHObjects:(id)a0;
+ (id)changeDetailsFromFetchResult:(id)a0 toFetchResult:(id)a1 changedObjects:(id)a2;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_addAdditionalIndexesToChanges:(id)a0 withPreviousIdentifiers:(id)a1 currentIdentifiers:(id)a2;
- (void)calculateDiffs;
- (void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long *)a0 updatedCount:(unsigned long long *)a1 deletedCount:(unsigned long long *)a2;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (char)hasDiffs;
- (id)initWithFetchResult:(id)a0 currentFetchResult:(id)a1 changedIdentifiers:(id)a2 unknownMergeEvent:(char)a3;
- (id)initWithFetchResult:(id)a0 currentFetchResult:(id)a1 sortedChangedIdentifiers:(id)a2 unknownMergeEvent:(char)a3;
- (id)initWithManualFetchResultAfterChanges:(id)a0;
- (char)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;

@end
