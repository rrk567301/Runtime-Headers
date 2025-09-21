@class NSIndexSet, NSArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface MPChangeDetails : NSObject {
    NSMutableDictionary *_sectionMoves;
    NSMutableDictionary *_sectionUpdates;
    NSMutableIndexSet *_updatedSectionMoveFromIndexes;
    NSMutableDictionary *_itemMoves;
    NSMutableDictionary *_itemUpdates;
    NSMutableSet *_updatedItemMoveFromIndexPaths;
    char _isFlatCollection;
    char _isFinalized;
}

@property (class, readonly, nonatomic) MPChangeDetails *empty;

@property (copy, nonatomic) NSIndexSet *insertedSections;
@property (copy, nonatomic) NSIndexSet *deletedSections;
@property (copy, nonatomic) NSIndexSet *updatedSections;
@property (copy, nonatomic) NSArray *insertedItemIndexPaths;
@property (copy, nonatomic) NSArray *deletedItemIndexPaths;
@property (copy, nonatomic) NSArray *updatedItemIndexPaths;
@property (readonly, nonatomic) char hasChanges;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *updatedIndexes;

+ (id)changeDetailsWithPreviousCount:(long long)a0 finalCount:(long long)a1 isEqualBlock:(id /* block */)a2 isUpdatedBlock:(id /* block */)a3;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (void)enumerateSectionMovesWithBlock:(id /* block */)a0;
- (void)enumerateItemUpdatesUsingBlock:(id /* block */)a0;
- (void)appendItemMoveFromIndexPath:(id)a0 toIndexPath:(id)a1 updated:(char)a2;
- (void)appendItemUpdateForPreviousIndexPath:(id)a0 finalIndexPath:(id)a1;
- (void)appendSectionMoveFromIndex:(long long)a0 toIndex:(long long)a1 updated:(char)a2;
- (void)appendSectionUpdateForPreviousIndex:(long long)a0 finalIndex:(long long)a1;
- (void)applyUIKitWorkarounds;
- (void)enumerateItemMovesUsingBlock:(id /* block */)a0;
- (void)enumerateItemMovesWithBlock:(id /* block */)a0;
- (void)enumerateMovesUsingBlock:(id /* block */)a0;
- (void)enumerateSectionMovesUsingBlock:(id /* block */)a0;
- (void)enumerateSectionUpdatesUsingBlock:(id /* block */)a0;
- (void)enumerateUpdatesUsingBlock:(id /* block */)a0;
- (char)isValidForPreviousCount:(long long)a0 finalCount:(long long)a1 reason:(id *)a2;
- (void)removeItemMoveFromIndexPath:(id)a0;
- (void)removeItemUpdateForPreviousIndexPath:(id)a0;
- (void)removeSectionMoveFromIndex:(long long)a0;
- (void)removeSectionUpdateForPreviousIndex:(long long)a0;

@end
