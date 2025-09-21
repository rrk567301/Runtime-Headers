@class ODDSiriSchemaODDRequestsWithoutAssetsCounts, ODDSiriSchemaODDRequestsWithoutAssetsDimensions, NSData;

@interface ODDSiriSchemaODDRequestsWithoutAssetsDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsDimensions *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsCounts *counts;
@property (nonatomic) char hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCounts;
- (void)deleteDimensions;
- (id)suppressMessageUnderConditions;

@end
