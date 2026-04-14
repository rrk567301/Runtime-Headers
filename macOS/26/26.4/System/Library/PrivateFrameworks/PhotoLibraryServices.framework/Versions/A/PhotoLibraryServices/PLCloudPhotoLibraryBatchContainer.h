@class CPLChangeBatch, NSMutableSet;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (retain, nonatomic) NSMutableSet *computeSyncRelevantAssetsInBatch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (id)lastAddedRecord;
- (void).cxx_destruct;
- (id)batchesSplitForError;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)incrementRetryCount;

@end
