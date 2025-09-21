@class MHSchemaMHVoiceTriggerSecondPassRejected, MHSchemaMHVoiceTriggerSecondPassStarted, NSData, MHSchemaMHVoiceTriggerSecondPassCancelled, MHSchemaMHVoiceTriggerSecondPassTriggered;

@interface MHSchemaMHVoiceTriggerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassTriggered *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassRejected *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassCancelled *cancelled;
@property (nonatomic) char hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
