@class NSData;

@interface STSchemaSTAnswerSynthesisPerfMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char answerSynthesisOverallDurationInMs : 1; unsigned char promptGenerationDurationInMs : 1; unsigned char dataFilteringDurationInMs : 1; unsigned char searchEntityPreProcessDurationInMs : 1; unsigned char llmPreWarmModelDurationInMs : 1; unsigned char llmInferenceDurationInMs : 1; unsigned char postProcessFilterDurationInMs : 1; unsigned char collateAnswerSynthesisResultDurationInMs : 1; unsigned char answerSynthesisTotalHydrationTimeInMs : 1; unsigned char answerSynthesisModelPromptGenerationTimeInMs : 1; unsigned char answerSynthesisModelInferenceTimeInMs : 1; unsigned char pqaModelPromptGenerationTimeInMs : 1; unsigned char pqaModelInferenceTimeInMs : 1; unsigned char answerSynthesisPostProcessingTimeInMs : 1; unsigned char answerSynthesisPCCPromptGenerationTimeInMs : 1; } _has;
}

@property (nonatomic) unsigned int answerSynthesisOverallDurationInMs;
@property (nonatomic) BOOL hasAnswerSynthesisOverallDurationInMs;
@property (nonatomic) unsigned int promptGenerationDurationInMs;
@property (nonatomic) BOOL hasPromptGenerationDurationInMs;
@property (nonatomic) unsigned int dataFilteringDurationInMs;
@property (nonatomic) BOOL hasDataFilteringDurationInMs;
@property (nonatomic) unsigned int searchEntityPreProcessDurationInMs;
@property (nonatomic) BOOL hasSearchEntityPreProcessDurationInMs;
@property (nonatomic) unsigned int llmPreWarmModelDurationInMs;
@property (nonatomic) BOOL hasLlmPreWarmModelDurationInMs;
@property (nonatomic) unsigned int llmInferenceDurationInMs;
@property (nonatomic) BOOL hasLlmInferenceDurationInMs;
@property (nonatomic) unsigned int postProcessFilterDurationInMs;
@property (nonatomic) BOOL hasPostProcessFilterDurationInMs;
@property (nonatomic) unsigned int collateAnswerSynthesisResultDurationInMs;
@property (nonatomic) BOOL hasCollateAnswerSynthesisResultDurationInMs;
@property (nonatomic) int answerSynthesisTotalHydrationTimeInMs;
@property (nonatomic) BOOL hasAnswerSynthesisTotalHydrationTimeInMs;
@property (nonatomic) int answerSynthesisModelPromptGenerationTimeInMs;
@property (nonatomic) BOOL hasAnswerSynthesisModelPromptGenerationTimeInMs;
@property (nonatomic) int answerSynthesisModelInferenceTimeInMs;
@property (nonatomic) BOOL hasAnswerSynthesisModelInferenceTimeInMs;
@property (nonatomic) int pqaModelPromptGenerationTimeInMs;
@property (nonatomic) BOOL hasPqaModelPromptGenerationTimeInMs;
@property (nonatomic) int pqaModelInferenceTimeInMs;
@property (nonatomic) BOOL hasPqaModelInferenceTimeInMs;
@property (nonatomic) int answerSynthesisPostProcessingTimeInMs;
@property (nonatomic) BOOL hasAnswerSynthesisPostProcessingTimeInMs;
@property (nonatomic) int answerSynthesisPCCPromptGenerationTimeInMs;
@property (nonatomic) BOOL hasAnswerSynthesisPCCPromptGenerationTimeInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePqaModelInferenceTimeInMs;
- (void)deleteDataFilteringDurationInMs;
- (void)deleteAnswerSynthesisModelInferenceTimeInMs;
- (void)deleteAnswerSynthesisModelPromptGenerationTimeInMs;
- (void)deleteAnswerSynthesisOverallDurationInMs;
- (void)deleteAnswerSynthesisPCCPromptGenerationTimeInMs;
- (void)deleteAnswerSynthesisPostProcessingTimeInMs;
- (void)deleteAnswerSynthesisTotalHydrationTimeInMs;
- (void)deleteCollateAnswerSynthesisResultDurationInMs;
- (void)deleteLlmInferenceDurationInMs;
- (void)deleteLlmPreWarmModelDurationInMs;
- (void)deletePostProcessFilterDurationInMs;
- (void)deletePqaModelPromptGenerationTimeInMs;
- (void)deletePromptGenerationDurationInMs;
- (void)deleteSearchEntityPreProcessDurationInMs;
- (id)suppressMessageUnderConditions;

@end
