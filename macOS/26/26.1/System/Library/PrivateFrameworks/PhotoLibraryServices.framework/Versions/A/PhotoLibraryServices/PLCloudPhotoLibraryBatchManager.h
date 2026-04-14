@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (long long)currentBatchCount;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (id)description;
- (BOOL)isAboveMaximumResourceBudget;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (id)drainBatches;
- (id)init;

@end
