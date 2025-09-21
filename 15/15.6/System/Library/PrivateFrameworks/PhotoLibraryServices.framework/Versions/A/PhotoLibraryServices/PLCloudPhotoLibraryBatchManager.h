@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    char _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addRecord:(id)a0;
- (void)addComputeSyncRelevantAsset:(id)a0;
- (void)addRecord:(id)a0 ignoreBatchSize:(char)a1;
- (long long)currentBatchCount;
- (id)drainBatches;
- (char)isAboveMaximumResourceBudget;

@end
