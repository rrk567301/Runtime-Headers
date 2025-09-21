@class NSData, NSString;

@interface _SFPBPhotosAggregatedInfo : PBCodable <_SFPBPhotosAggregatedInfo, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int totalNumberOfAssets;
@property (nonatomic) int totalNumberOfEmbeddingMatchedAssets;
@property (nonatomic) int totalNumberOfMetadataMatchedAssets;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
