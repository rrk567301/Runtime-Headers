@class NSString, NSArray, NSData, PLUSSchemaPLUSMediaSuggestionEvaluation, SISchemaUUID, PLUSSchemaPLUSMediaConfiguredState;

@interface PLUSSchemaPLUSMediaEvaluationSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char playUserFeedback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (nonatomic) int playUserFeedback;
@property (nonatomic) char hasPlayUserFeedback;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionEvaluation *suggestionEvaluation;
@property (nonatomic) char hasSuggestionEvaluation;
@property (copy, nonatomic) NSArray *groundTruthSummaries;
@property (retain, nonatomic) PLUSSchemaPLUSMediaConfiguredState *configuredState;
@property (nonatomic) char hasConfiguredState;
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
- (void)addGroundTruthSummaries:(id)a0;
- (void)clearGroundTruthSummaries;
- (void)deleteConfiguredState;
- (void)deleteGroundTruthSummaries;
- (void)deleteOriginalRequestId;
- (void)deletePlayUserFeedback;
- (void)deleteResultCandidateId;
- (void)deleteSuggestionEvaluation;
- (id)groundTruthSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)groundTruthSummariesCount;
- (id)suppressMessageUnderConditions;

@end
