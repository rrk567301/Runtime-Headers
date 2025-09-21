@class CNVSchemaCNVIntentFinalExecutionStarted, CNVSchemaCNVIntentFinalExecutionCancelled, NSData, CNVSchemaCNVIntentFinalExecutionEnded, SISchemaUUID, CNVSchemaCNVIntentFinalExecutionFailed;

@interface CNVSchemaCNVIntentFinalExecutionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionCancelled *cancelled;
@property (nonatomic) char hasCancelled;
@property (retain, nonatomic) SISchemaUUID *hypothesisId;
@property (nonatomic) char hasHypothesisId;
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
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
