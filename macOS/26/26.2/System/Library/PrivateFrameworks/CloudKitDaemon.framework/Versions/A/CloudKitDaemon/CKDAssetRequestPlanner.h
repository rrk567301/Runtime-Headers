@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (void)addRereferencedPackageItem:(id)a0;
- (void)resetAssetTokenRequests;
- (id)initWithAssetTokenRequestSizeLimit:(unsigned int)a0;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (void)failBatch:(id)a0;
- (void)planRegisterBatches;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (void).cxx_destruct;
- (id)description;
- (void)planAssetRequests;
- (id)init;
- (id)CKPropertiesDescription;

@end
