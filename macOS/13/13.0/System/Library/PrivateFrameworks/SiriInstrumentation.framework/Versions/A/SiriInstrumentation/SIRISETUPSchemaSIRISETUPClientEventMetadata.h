@class NSData, SISchemaUUID;

@interface SIRISETUPSchemaSIRISETUPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *siriSetupId;
@property (nonatomic) BOOL hasSiriSetupId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSiriSetupId;

@end
