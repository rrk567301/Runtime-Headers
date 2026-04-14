@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (id)CKPropertiesDescription;
- (void)addMMCSSectionItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)initWithAssetTokenRequestSizeLimit:(unsigned int)a0;
- (void)resetAssetTokenRequests;
- (id)description;
- (void)addRereferencedPackageItem:(id)a0;
- (void).cxx_destruct;
- (void)planAssetRequests;
- (void)planRegisterBatches;
- (void)failBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (id)init;

@end
