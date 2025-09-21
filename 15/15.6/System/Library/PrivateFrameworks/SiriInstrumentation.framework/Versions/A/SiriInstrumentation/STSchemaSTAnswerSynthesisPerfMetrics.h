@class NSData;

@interface STSchemaSTAnswerSynthesisPerfMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char answerSynthesisOverallDurationInMs : 1; unsigned char promptGenerationDurationInMs : 1; unsigned char dataFilteringDurationInMs : 1; unsigned char searchEntityPreProcessDurationInMs : 1; unsigned char llmPreWarmModelDurationInMs : 1; unsigned char llmInferenceDurationInMs : 1; unsigned char postProcessFilterDurationInMs : 1; unsigned char collateAnswerSynthesisResultDurationInMs : 1; unsigned char answerSynthesisTotalHydrationTimeInMs : 1; unsigned char answerSynthesisModelPromptGenerationTimeInMs : 1; unsigned char answerSynthesisModelInferenceTimeInMs : 1; unsigned char pqaModelPromptGenerationTimeInMs : 1; unsigned char pqaModelInferenceTimeInMs : 1; unsigned char answerSynthesisPostProcessingTimeInMs : 1; unsigned char answerSynthesisPCCPromptGenerationTimeInMs : 1; } _has;
}

@property (nonatomic) unsigned int answerSynthesisOverallDurationInMs;
@property (nonatomic) char hasAnswerSynthesisOverallDurationInMs;
@property (nonatomic) unsigned int promptGenerationDurationInMs;
@property (nonatomic) char hasPromptGenerationDurationInMs;
@property (nonatomic) unsigned int dataFilteringDurationInMs;
@property (nonatomic) char hasDataFilteringDurationInMs;
@property (nonatomic) unsigned int searchEntityPreProcessDurationInMs;
@property (nonatomic) char hasSearchEntityPreProcessDurationInMs;
@property (nonatomic) unsigned int llmPreWarmModelDurationInMs;
@property (nonatomic) char hasLlmPreWarmModelDurationInMs;
@property (nonatomic) unsigned int llmInferenceDurationInMs;
@property (nonatomic) char hasLlmInferenceDurationInMs;
@property (nonatomic) unsigned int postProcessFilterDurationInMs;
@property (nonatomic) char hasPostProcessFilterDurationInMs;
@property (nonatomic) unsigned int collateAnswerSynthesisResultDurationInMs;
@property (nonatomic) char hasCollateAnswerSynthesisResultDurationInMs;
@property (nonatomic) int answerSynthesisTotalHydrationTimeInMs;
@property (nonatomic) char hasAnswerSynthesisTotalHydrationTimeInMs;
@property (nonatomic) int answerSynthesisModelPromptGenerationTimeInMs;
@property (nonatomic) char hasAnswerSynthesisModelPromptGenerationTimeInMs;
@property (nonatomic) int answerSynthesisModelInferenceTimeInMs;
@property (nonatomic) char hasAnswerSynthesisModelInferenceTimeInMs;
@property (nonatomic) int pqaModelPromptGenerationTimeInMs;
@property (nonatomic) char hasPqaModelPromptGenerationTimeInMs;
@property (nonatomic) int pqaModelInferenceTimeInMs;
@property (nonatomic) char hasPqaModelInferenceTimeInMs;
@property (nonatomic) int answerSynthesisPostProcessingTimeInMs;
@property (nonatomic) char hasAnswerSynthesisPostProcessingTimeInMs;
@property (nonatomic) int answerSynthesisPCCPromptGenerationTimeInMs;
@property (nonatomic) char hasAnswerSynthesisPCCPromptGenerationTimeInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
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
