@class NSData, SISchemaUUID;

@interface SUTSchemaTestExecutionMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *fingerprint;
@property (nonatomic) BOOL hasFingerprint;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFingerprint;

@end
