@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (void)reset;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (void).cxx_destruct;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (id)description;
- (BOOL)isAboveMaximumResourceBudget;
- (id)drainBatches;
- (id)init;
- (void)dealloc;
- (long long)currentBatchCount;

@end
