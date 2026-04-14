@class CPLChangeBatch, NSMutableSet;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (retain, nonatomic) NSMutableSet *computeSyncRelevantAssetsInBatch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (unsigned long long)count;
- (id)lastAddedRecord;
- (void)incrementRetryCount;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)batchesSplitForError;

@end
