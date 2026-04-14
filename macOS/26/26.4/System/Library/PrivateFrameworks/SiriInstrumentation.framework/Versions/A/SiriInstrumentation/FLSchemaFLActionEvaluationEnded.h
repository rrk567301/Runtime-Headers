@class NSArray, NSData, FLSchemaFLTaskEvaluation, SISchemaUUID;

@interface FLSchemaFLActionEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char actionStatementId : 1; unsigned char evaluationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) BOOL hasIfSessionId;
@property (nonatomic) unsigned int actionStatementId;
@property (nonatomic) BOOL hasActionStatementId;
@property (retain, nonatomic) FLSchemaFLTaskEvaluation *taskEvaluation;
@property (nonatomic) BOOL hasTaskEvaluation;
@property (copy, nonatomic) NSArray *candidateEvaluations;
@property (nonatomic) int evaluationType;
@property (nonatomic) BOOL hasEvaluationType;
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
- (void)addCandidateEvaluations:(id)a0;
- (id)candidateEvaluationsAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateEvaluationsCount;
- (void)clearCandidateEvaluations;
- (void)deleteActionStatementId;
- (void)deleteCandidateEvaluations;
- (void)deleteEvaluationType;
- (void)deleteIfSessionId;
- (void)deleteTaskEvaluation;

@end
