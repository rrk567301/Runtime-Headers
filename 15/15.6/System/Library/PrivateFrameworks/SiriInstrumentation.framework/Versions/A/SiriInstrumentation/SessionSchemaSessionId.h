@class NSData, SISchemaUUID;

@interface SessionSchemaSessionId : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) char hasSessionId;
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
- (void)deleteSessionId;
- (id)suppressMessageUnderConditions;

@end
