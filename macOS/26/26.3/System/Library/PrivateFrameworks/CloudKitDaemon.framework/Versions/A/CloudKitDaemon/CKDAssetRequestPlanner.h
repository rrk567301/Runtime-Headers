@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (id)CKPropertiesDescription;
- (void)failBatch:(id)a0;
- (id)description;
- (id)init;
- (void)resetAssetTokenRequests;
- (void)planAssetRequests;
- (void).cxx_destruct;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (BOOL)hasSuccessfulBatches;
- (id)initWithAssetTokenRequestSizeLimit:(unsigned int)a0;
- (void)planRegisterBatches;
- (void)addRereferencedPackageItem:(id)a0;

@end
