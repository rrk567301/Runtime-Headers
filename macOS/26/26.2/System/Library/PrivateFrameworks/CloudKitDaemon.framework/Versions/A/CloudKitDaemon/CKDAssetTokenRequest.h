@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (void)addAssetBatch:(id)a0;
- (id)successfulBatches;
- (void)addFailedBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (id)CKPropertiesDescription;

@end
