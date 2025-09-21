@interface PXFeedLayoutGeneratorScanState : NSObject

@property (nonatomic) long long scanLocation;
@property (retain, nonatomic) id scannedBatchID;
@property (nonatomic) char scannedBatchHasCaption;
@property (nonatomic) long long scanSpecialSequenceCount;

- (void).cxx_destruct;

@end
