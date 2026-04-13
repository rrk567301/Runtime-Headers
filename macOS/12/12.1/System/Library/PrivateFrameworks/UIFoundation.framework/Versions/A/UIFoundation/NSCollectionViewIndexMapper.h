@class NSMutableIndexSet;

@interface NSCollectionViewIndexMapper : NSObject {
    long long _oldIndexCount;
    long long _newIndexCount;
    long long *_oldIndexMap;
    long long *_newIndexMap;
    NSMutableIndexSet *_oldMovedRows;
    NSMutableIndexSet *_addedRows;
    NSMutableIndexSet *_items;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_deletedRows;
    BOOL _cleanupForMoves;
    BOOL _hasPendingDeletes;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)insertItemAtIndex:(long long)a0;
- (id)initWithOldIndexCount:(long long)a0 newIndexCount:(long long)a1;
- (void)deleteItemAtIndex:(long long)a0;
- (void)finishModifications;
- (long long)oldIndexAt:(long long)a0;
- (long long)newIndexAt:(long long)a0;
- (long long)oldIndexCount;
- (BOOL)didDeleteIndex:(long long)a0;
- (BOOL)didInsertIndex:(long long)a0;
- (void)_flushPendingDeletes;
- (void)_flushPendingInserts;
- (long long)newIndexCount;
- (long long *)oldIndexMap;
- (long long *)newIndexMap;
- (void)getNewIndexCount:(long long *)a0 newIndexMap:(long long **)a1;

@end
