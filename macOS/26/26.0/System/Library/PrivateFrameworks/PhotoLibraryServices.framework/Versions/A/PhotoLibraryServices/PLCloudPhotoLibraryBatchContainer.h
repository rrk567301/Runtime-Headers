@class CPLChangeBatch, NSMutableSet;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (retain, nonatomic) NSMutableSet *computeSyncRelevantAssetsInBatch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (id)lastAddedRecord;
- (void)addRecord:(id)a0;
- (unsigned long long)count;
- (id)batchesSplitForError;
- (id)init;
- (id)description;
- (void)incrementRetryCount;
- (void).cxx_destruct;

@end
