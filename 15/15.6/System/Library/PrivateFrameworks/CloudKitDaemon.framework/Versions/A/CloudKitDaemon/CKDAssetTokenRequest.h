@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)CKPropertiesDescription;
- (void)addFailedBatch:(id)a0;
- (void)addAssetBatch:(id)a0;
- (char)hasSuccessfulBatches;
- (id)successfulBatches;

@end
