@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)failBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)a0;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)a0 assetTokenRequestSizeLimit:(unsigned int)a1;
- (void)planAssetRequests;
- (void)planGetChunkKeysBatches;
- (void)planRegisterBatches;
- (void)resetAssetTokenRequests;

@end
