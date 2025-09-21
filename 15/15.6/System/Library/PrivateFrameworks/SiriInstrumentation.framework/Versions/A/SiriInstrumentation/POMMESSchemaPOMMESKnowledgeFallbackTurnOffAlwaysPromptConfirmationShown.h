@class NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESKnowledgeFallbackTurnOffAlwaysPromptConfirmationShown : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *pommesSessionId;
@property (nonatomic) char hasPommesSessionId;
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
- (void)deletePommesSessionId;
- (id)suppressMessageUnderConditions;

@end
