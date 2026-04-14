@class NSString, NSArray, NSData, PLUSSchemaPLUSMediaSuggestionEvaluation, SISchemaUUID, PLUSSchemaPLUSMediaConfiguredState;

@interface PLUSSchemaPLUSMediaEvaluationSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char playUserFeedback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int playUserFeedback;
@property (nonatomic) BOOL hasPlayUserFeedback;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionEvaluation *suggestionEvaluation;
@property (nonatomic) BOOL hasSuggestionEvaluation;
@property (copy, nonatomic) NSArray *groundTruthSummaries;
@property (retain, nonatomic) PLUSSchemaPLUSMediaConfiguredState *configuredState;
@property (nonatomic) BOOL hasConfiguredState;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResultCandidateId;
- (void)deleteOriginalRequestId;
- (void)deletePlayUserFeedback;
- (void)deleteSuggestionEvaluation;
- (void)clearGroundTruthSummaries;
- (void)deleteGroundTruthSummaries;
- (void)addGroundTruthSummaries:(id)a0;
- (unsigned long long)groundTruthSummariesCount;
- (id)groundTruthSummariesAtIndex:(unsigned long long)a0;
- (void)deleteConfiguredState;

@end
