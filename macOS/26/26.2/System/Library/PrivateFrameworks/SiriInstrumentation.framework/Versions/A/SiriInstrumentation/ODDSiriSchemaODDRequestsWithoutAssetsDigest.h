@class ODDSiriSchemaODDRequestsWithoutAssetsCounts, ODDSiriSchemaODDRequestsWithoutAssetsDimensions, NSData;

@interface ODDSiriSchemaODDRequestsWithoutAssetsDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDRequestsWithoutAssetsCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteCounts;
- (void)deleteDimensions;

@end
