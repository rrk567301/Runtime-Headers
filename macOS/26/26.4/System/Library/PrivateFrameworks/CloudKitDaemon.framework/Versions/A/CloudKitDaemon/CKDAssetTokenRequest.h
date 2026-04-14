@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (BOOL)isEmpty;
- (id)successfulBatches;
- (void)addFailedBatch:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addAssetBatch:(id)a0;
- (id)init;
- (BOOL)hasSuccessfulBatches;
- (id)description;

@end
