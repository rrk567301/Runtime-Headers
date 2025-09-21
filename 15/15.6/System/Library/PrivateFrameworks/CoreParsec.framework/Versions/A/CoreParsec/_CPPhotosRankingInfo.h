@class NSData, NSString;

@interface _CPPhotosRankingInfo : PBCodable <_CPPhotosRankingInfo, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int totalNumberOfAssetsIndexed;
@property (nonatomic) int totalNumberOfAssetsInLibrary;
@property (nonatomic) int totalNumberOfEmbeddingMatchedAssets;
@property (nonatomic) int totalNumberOfMetadataMatchedAssets;
@property (nonatomic) int assetEstimationOffAmount;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
