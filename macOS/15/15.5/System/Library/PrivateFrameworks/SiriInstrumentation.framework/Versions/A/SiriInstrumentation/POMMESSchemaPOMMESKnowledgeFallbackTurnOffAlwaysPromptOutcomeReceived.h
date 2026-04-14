@class NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESKnowledgeFallbackTurnOffAlwaysPromptOutcomeReceived : SISchemaInstrumentationMessage {
    struct { unsigned char confirmationOutcome : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesSessionId;
@property (nonatomic) BOOL hasPommesSessionId;
@property (nonatomic) int confirmationOutcome;
@property (nonatomic) BOOL hasConfirmationOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConfirmationOutcome;
- (void)deletePommesSessionId;
- (id)suppressMessageUnderConditions;

@end
