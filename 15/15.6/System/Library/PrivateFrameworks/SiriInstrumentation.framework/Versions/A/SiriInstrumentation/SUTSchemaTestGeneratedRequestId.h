@class NSData, SISchemaUUID;

@interface SUTSchemaTestGeneratedRequestId : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;

@end
