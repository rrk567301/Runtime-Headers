@class ODDSiriSchemaODDRequestsWithoutAssetsCounts, ODDSiriSchemaODDRequestsWithoutAssetsDimensions, NSData;

@interface ODDSiriSchemaODDRequestsWithoutAssetsDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCounts;
- (void)deleteDimensions;

@end
