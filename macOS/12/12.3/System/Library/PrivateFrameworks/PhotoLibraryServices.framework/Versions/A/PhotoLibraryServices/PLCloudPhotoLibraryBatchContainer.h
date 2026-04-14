@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)addRecord:(id)a0;
- (void)incrementRetryCount;
- (id)batchesSplitForError;
- (id)lastAddedRecord;

@end
