@class NSArray, NSData, FLSchemaFLTaskOutcome;

@interface FLSchemaFLTaskEvaluation : SISchemaInstrumentationMessage {
    struct { unsigned char actionResolutionState : 1; } _has;
}

@property (nonatomic) int actionResolutionState;
@property (nonatomic) char hasActionResolutionState;
@property (retain, nonatomic) FLSchemaFLTaskOutcome *taskOutcome;
@property (nonatomic) char hasTaskOutcome;
@property (copy, nonatomic) NSArray *evaluationNodes;
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
- (void)addEvaluationNodes:(id)a0;
- (void)clearEvaluationNodes;
- (void)deleteActionResolutionState;
- (void)deleteEvaluationNodes;
- (void)deleteTaskOutcome;
- (id)evaluationNodesAtIndex:(unsigned long long)a0;
- (unsigned long long)evaluationNodesCount;
- (id)suppressMessageUnderConditions;

@end
