@class NSData;

@interface STSchemaLLMQUPerfMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char llmquOverallDurationInMs : 1; unsigned char llmquPromptGenerationDurationInMs : 1; unsigned char llmquPreWarmModelDurationInMs : 1; unsigned char llmquInferenceDurationInMs : 1; unsigned char llmquPostProcessFilterDurationInMs : 1; } _has;
}

@property (nonatomic) unsigned int llmquOverallDurationInMs;
@property (nonatomic) char hasLlmquOverallDurationInMs;
@property (nonatomic) unsigned int llmquPromptGenerationDurationInMs;
@property (nonatomic) char hasLlmquPromptGenerationDurationInMs;
@property (nonatomic) unsigned int llmquPreWarmModelDurationInMs;
@property (nonatomic) char hasLlmquPreWarmModelDurationInMs;
@property (nonatomic) unsigned int llmquInferenceDurationInMs;
@property (nonatomic) char hasLlmquInferenceDurationInMs;
@property (nonatomic) unsigned int llmquPostProcessFilterDurationInMs;
@property (nonatomic) char hasLlmquPostProcessFilterDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLlmquInferenceDurationInMs;
- (void)deleteLlmquOverallDurationInMs;
- (void)deleteLlmquPostProcessFilterDurationInMs;
- (void)deleteLlmquPreWarmModelDurationInMs;
- (void)deleteLlmquPromptGenerationDurationInMs;
- (id)suppressMessageUnderConditions;

@end
