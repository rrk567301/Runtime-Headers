@class NSData, SISchemaUUID;

@interface ANCSchemaANCServerEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ancId;
@property (nonatomic) BOOL hasAncId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAncId;

@end
