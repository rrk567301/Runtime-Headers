@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (BOOL)isAboveMaximumResourceBudget;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (id)drainBatches;
- (long long)currentBatchCount;
- (void).cxx_destruct;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (void)reset;
- (id)init;
- (id)description;
- (void)dealloc;

@end
