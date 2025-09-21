@class NSData;

@interface ODDSiriSchemaODDRequestsWithoutAssetsCounts : SISchemaInstrumentationMessage {
    struct { unsigned char requestsRequiringAssetsCount : 1; unsigned char requestsMissingAssetsCount : 1; unsigned char requestsWithFailuresCount : 1; } _has;
}

@property (nonatomic) unsigned int requestsRequiringAssetsCount;
@property (nonatomic) BOOL hasRequestsRequiringAssetsCount;
@property (nonatomic) unsigned int requestsMissingAssetsCount;
@property (nonatomic) BOOL hasRequestsMissingAssetsCount;
@property (nonatomic) unsigned int requestsWithFailuresCount;
@property (nonatomic) BOOL hasRequestsWithFailuresCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteRequestsWithFailuresCount;
- (void)deleteRequestsMissingAssetsCount;
- (void)deleteRequestsRequiringAssetsCount;

@end
