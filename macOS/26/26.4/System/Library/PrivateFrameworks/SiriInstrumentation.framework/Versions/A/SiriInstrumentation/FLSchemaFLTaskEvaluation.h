@class NSArray, NSData, FLSchemaFLTaskOutcome;

@interface FLSchemaFLTaskEvaluation : SISchemaInstrumentationMessage {
    struct { unsigned char actionResolutionState : 1; } _has;
}

@property (nonatomic) int actionResolutionState;
@property (nonatomic) BOOL hasActionResolutionState;
@property (retain, nonatomic) FLSchemaFLTaskOutcome *taskOutcome;
@property (nonatomic) BOOL hasTaskOutcome;
@property (copy, nonatomic) NSArray *evaluationNodes;
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
- (void)addEvaluationNodes:(id)a0;
- (void)clearEvaluationNodes;
- (void)deleteActionResolutionState;
- (void)deleteEvaluationNodes;
- (void)deleteTaskOutcome;
- (id)evaluationNodesAtIndex:(unsigned long long)a0;
- (unsigned long long)evaluationNodesCount;

@end
