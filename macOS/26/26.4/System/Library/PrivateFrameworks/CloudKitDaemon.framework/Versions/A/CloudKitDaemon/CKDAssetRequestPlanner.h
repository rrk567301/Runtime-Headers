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
- (void)addMMCSItem:(id)a0;
- (void)failBatch:(id)a0;
- (void)resetAssetTokenRequests;
- (void).cxx_destruct;
- (void)planRegisterBatches;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (id)CKPropertiesDescription;
- (void)planAssetRequests;
- (void)addMMCSSectionItem:(id)a0;
- (id)init;
- (BOOL)hasSuccessfulBatches;
- (id)description;
- (id)initWithAssetTokenRequestSizeLimit:(unsigned int)a0;

@end
