@class NSMutableIndexSet;

@interface IKDatasourceDiffResult : NSObject {
    NSMutableIndexSet *indexesToAdd;
    NSMutableIndexSet *indexesToRemove;
    char _needToExchangeItems;
    long long *_oldIndexToNewIndex;
    long long *_newIndexToOldIndex;
    int _indexBufferLength;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)indexesToRemove;
- (void)addAddOperationWithIndex:(long long)a0;
- (void)addMoveOperationFrom:(long long)a0 to:(long long)a1;
- (void)addRemoveOperationWithIndex:(long long)a0;
- (void)allocIndexesBuffers:(int)a0;
- (id)indexesToAdd;
- (char)needToExchangeItems;
- (long long)newIndexOfOldIndex:(long long)a0;
- (char)noDifference;
- (long long)oldIndexOfNewIndex:(long long)a0;
- (void)setNeedToExchangeItems:(char)a0;

@end
