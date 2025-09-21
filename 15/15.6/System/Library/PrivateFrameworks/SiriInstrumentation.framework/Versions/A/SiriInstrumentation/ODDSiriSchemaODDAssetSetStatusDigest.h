@class NSData, ODDSiriSchemaODDAssetSetStatusDimensions;

@interface ODDSiriSchemaODDAssetSetStatusDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssetSetStatusDimensions *dimensions;
@property (nonatomic) char hasDimensions;
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
- (void)deleteDimensions;
- (id)suppressMessageUnderConditions;

@end
