@class NSData, NSString;

@interface _CPPhotosRankingInfo : PBCodable <_CPPhotosRankingInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int totalNumberOfAssetsIndexed;
@property (nonatomic) int totalNumberOfAssetsInLibrary;
@property (nonatomic) int totalNumberOfEmbeddingMatchedAssets;
@property (nonatomic) int totalNumberOfMetadataMatchedAssets;
@property (nonatomic) int assetEstimationOffAmount;
@property (nonatomic) int indexedAssetsPercentage;
@property (nonatomic) int analyzedAssetsPercentage;
@property (nonatomic) int analyzedAndIndexedAssetsPercentage;
@property (nonatomic) int embeddedAssetsPercentage;
@property (nonatomic) int assetsRetrieved;
@property (nonatomic) int collectionsRetrieved;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
