@class NSData;

@interface ODDSiriSchemaODDRequestsWithoutAssetsCounts : SISchemaInstrumentationMessage {
    struct { unsigned char requestsRequiringAssetsCount : 1; unsigned char requestsMissingAssetsCount : 1; unsigned char requestsWithFailuresCount : 1; } _has;
}

@property (nonatomic) unsigned int requestsRequiringAssetsCount;
@property (nonatomic) char hasRequestsRequiringAssetsCount;
@property (nonatomic) unsigned int requestsMissingAssetsCount;
@property (nonatomic) char hasRequestsMissingAssetsCount;
@property (nonatomic) unsigned int requestsWithFailuresCount;
@property (nonatomic) char hasRequestsWithFailuresCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestsWithFailuresCount;
- (void)deleteRequestsMissingAssetsCount;
- (void)deleteRequestsRequiringAssetsCount;
- (id)suppressMessageUnderConditions;

@end
