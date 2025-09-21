@class NSArray, NSData, FLSchemaFLTaskEvaluation, SISchemaUUID;

@interface FLSchemaFLActionEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; unsigned char evaluationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) char hasIfSessionId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) char hasActionStatementId;
@property (retain, nonatomic) FLSchemaFLTaskEvaluation *taskEvaluation;
@property (nonatomic) char hasTaskEvaluation;
@property (copy, nonatomic) NSArray *candidateEvaluations;
@property (nonatomic) int evaluationType;
@property (nonatomic) char hasEvaluationType;
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
- (void)addCandidateEvaluations:(id)a0;
- (id)candidateEvaluationsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateEvaluationsCount;
- (void)clearCandidateEvaluations;
- (void)deleteActionStatementId;
- (void)deleteCandidateEvaluations;
- (void)deleteEvaluationType;
- (void)deleteIfSessionId;
- (void)deleteTaskEvaluation;
- (id)suppressMessageUnderConditions;

@end
