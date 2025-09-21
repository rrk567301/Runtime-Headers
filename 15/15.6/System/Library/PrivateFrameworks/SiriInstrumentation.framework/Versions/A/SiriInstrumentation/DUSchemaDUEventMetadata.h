@class NSData, SISchemaUUID;

@interface DUSchemaDUEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *assetIdentifier;
@property (nonatomic) char hasAssetIdentifier;
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
- (void)deleteAssetIdentifier;
- (id)suppressMessageUnderConditions;

@end
