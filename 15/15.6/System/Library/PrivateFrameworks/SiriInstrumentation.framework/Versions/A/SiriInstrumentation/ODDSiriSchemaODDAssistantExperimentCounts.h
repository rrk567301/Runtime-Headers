@class ODDSiriSchemaODDReliabilityCounts, ODDSiriSchemaODDTurnCounts, ODDSiriSchemaODDSessionCounts, NSData, ODDSiriSchemaODDTaskCounts;

@interface ODDSiriSchemaODDAssistantExperimentCounts : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *turnCounts;
@property (nonatomic) char hasTurnCounts;
@property (retain, nonatomic) ODDSiriSchemaODDTaskCounts *taskCounts;
@property (nonatomic) char hasTaskCounts;
@property (retain, nonatomic) ODDSiriSchemaODDReliabilityCounts *reliabilityCounts;
@property (nonatomic) char hasReliabilityCounts;
@property (retain, nonatomic) ODDSiriSchemaODDSessionCounts *sessionCounts;
@property (nonatomic) char hasSessionCounts;
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
- (void)deleteReliabilityCounts;
- (void)deleteSessionCounts;
- (void)deleteTaskCounts;
- (void)deleteTurnCounts;
- (id)suppressMessageUnderConditions;

@end
