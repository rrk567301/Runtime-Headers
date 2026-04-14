@class ODDSiriSchemaODDReliabilityCounts, ODDSiriSchemaODDTurnCounts, ODDSiriSchemaODDSessionCounts, NSData, ODDSiriSchemaODDTaskCounts;

@interface ODDSiriSchemaODDAssistantExperimentCounts : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *turnCounts;
@property (nonatomic) BOOL hasTurnCounts;
@property (retain, nonatomic) ODDSiriSchemaODDTaskCounts *taskCounts;
@property (nonatomic) BOOL hasTaskCounts;
@property (retain, nonatomic) ODDSiriSchemaODDReliabilityCounts *reliabilityCounts;
@property (nonatomic) BOOL hasReliabilityCounts;
@property (retain, nonatomic) ODDSiriSchemaODDSessionCounts *sessionCounts;
@property (nonatomic) BOOL hasSessionCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReliabilityCounts;
- (void)deleteSessionCounts;
- (void)deleteTaskCounts;
- (void)deleteTurnCounts;

@end
