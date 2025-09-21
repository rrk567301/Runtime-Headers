@class NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESKnowledgeFallbackTurnOffAlwaysPromptOutcomeReceived : SISchemaInstrumentationMessage {
    struct { unsigned char confirmationOutcome : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesSessionId;
@property (nonatomic) char hasPommesSessionId;
@property (nonatomic) int confirmationOutcome;
@property (nonatomic) char hasConfirmationOutcome;
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
- (void)deleteConfirmationOutcome;
- (void)deletePommesSessionId;
- (id)suppressMessageUnderConditions;

@end
