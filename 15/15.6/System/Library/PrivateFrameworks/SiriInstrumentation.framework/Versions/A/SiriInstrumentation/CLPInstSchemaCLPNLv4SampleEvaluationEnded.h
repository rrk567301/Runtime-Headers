@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char evaluated : 1; unsigned char evaluationResultOnTheFirstUserParse : 1; unsigned char userStatedTaskOnTheFirstUserParse : 1; unsigned char matchedIndex : 1; unsigned char evaluationResult : 1; unsigned char userProfileSandboxRequested : 1; } _has;
}

@property (nonatomic) char evaluated;
@property (nonatomic) char hasEvaluated;
@property (nonatomic) char evaluationResultOnTheFirstUserParse;
@property (nonatomic) char hasEvaluationResultOnTheFirstUserParse;
@property (nonatomic) char userStatedTaskOnTheFirstUserParse;
@property (nonatomic) char hasUserStatedTaskOnTheFirstUserParse;
@property (nonatomic) int matchedIndex;
@property (nonatomic) char hasMatchedIndex;
@property (nonatomic) char evaluationResult;
@property (nonatomic) char hasEvaluationResult;
@property (nonatomic) char userProfileSandboxRequested;
@property (nonatomic) char hasUserProfileSandboxRequested;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvaluated;
- (void)deleteEvaluationResult;
- (void)deleteEvaluationResultOnTheFirstUserParse;
- (void)deleteMatchedIndex;
- (void)deleteUserProfileSandboxRequested;
- (void)deleteUserStatedTaskOnTheFirstUserParse;
- (id)suppressMessageUnderConditions;

@end
