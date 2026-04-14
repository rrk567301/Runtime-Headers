@class NSData, SISchemaUUID;

@interface CHSchemaCHClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *chId;
@property (nonatomic) BOOL hasChId;
@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRequestId;
- (void)deleteSessionId;
- (void)deleteChId;

@end
