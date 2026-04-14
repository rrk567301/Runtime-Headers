@class NSMutableIndexSet;

@interface IKDatasourceDiffResult : NSObject {
    NSMutableIndexSet *indexesToAdd;
    NSMutableIndexSet *indexesToRemove;
    BOOL _needToExchangeItems;
    long long *_oldIndexToNewIndex;
    long long *_newIndexToOldIndex;
    int _indexBufferLength;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)indexesToAdd;
- (id)indexesToRemove;
- (BOOL)needToExchangeItems;
- (BOOL)noDifference;
- (long long)oldIndexOfNewIndex:(long long)a0;
- (long long)newIndexOfOldIndex:(long long)a0;
- (void)addAddOperationWithIndex:(long long)a0;
- (void)addRemoveOperationWithIndex:(long long)a0;
- (void)setNeedToExchangeItems:(BOOL)a0;
- (void)addMoveOperationFrom:(long long)a0 to:(long long)a1;
- (void)allocIndexesBuffers:(int)a0;

@end
