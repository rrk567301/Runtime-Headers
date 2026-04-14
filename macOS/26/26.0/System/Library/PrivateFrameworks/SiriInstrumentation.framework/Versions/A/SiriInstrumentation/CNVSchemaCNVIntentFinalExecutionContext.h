@class CNVSchemaCNVIntentFinalExecutionStarted, CNVSchemaCNVIntentFinalExecutionCancelled, NSData, CNVSchemaCNVIntentFinalExecutionEnded, SISchemaUUID, CNVSchemaCNVIntentFinalExecutionFailed;

@interface CNVSchemaCNVIntentFinalExecutionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) SISchemaUUID *hypothesisId;
@property (nonatomic) BOOL hasHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;

@end
