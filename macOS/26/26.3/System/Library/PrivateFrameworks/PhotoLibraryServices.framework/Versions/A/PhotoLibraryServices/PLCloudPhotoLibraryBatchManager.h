@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (id)description;
- (id)init;
- (long long)currentBatchCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)drainBatches;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (BOOL)isAboveMaximumResourceBudget;

@end
