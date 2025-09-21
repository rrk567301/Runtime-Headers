@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (long long)currentBatchCount;
- (id)drainBatches;
- (void)reset;
- (void)dealloc;
- (void)addRecord:(id)a0;
- (BOOL)isAboveMaximumResourceBudget;
- (id)init;
- (id)description;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (void).cxx_destruct;

@end
