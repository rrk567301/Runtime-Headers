@class NSArray, NSData;

@interface STSchemaSTAnswerSynthesisDataMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char numLLMCalls : 1; unsigned char promptLength : 1; unsigned char responseLength : 1; unsigned char numAnswers : 1; unsigned char numQueriesTriggered : 1; unsigned char pqaModelPromptLength : 1; } _has;
}

@property (nonatomic) unsigned int numLLMCalls;
@property (nonatomic) char hasNumLLMCalls;
@property (nonatomic) unsigned int promptLength;
@property (nonatomic) char hasPromptLength;
@property (nonatomic) unsigned int responseLength;
@property (nonatomic) char hasResponseLength;
@property (nonatomic) unsigned int numAnswers;
@property (nonatomic) char hasNumAnswers;
@property (nonatomic) unsigned int numQueriesTriggered;
@property (nonatomic) char hasNumQueriesTriggered;
@property (nonatomic) int pqaModelPromptLength;
@property (nonatomic) char hasPqaModelPromptLength;
@property (copy, nonatomic) NSArray *answerSynthesisHydrationMetrics;
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
- (void)addAnswerSynthesisHydrationMetrics:(id)a0;
- (id)answerSynthesisHydrationMetricsAtIndex:(unsigned long long)a0;
- (unsigned long long)answerSynthesisHydrationMetricsCount;
- (void)clearAnswerSynthesisHydrationMetrics;
- (void)deleteAnswerSynthesisHydrationMetrics;
- (void)deleteNumAnswers;
- (void)deleteNumLLMCalls;
- (void)deleteNumQueriesTriggered;
- (void)deletePqaModelPromptLength;
- (void)deletePromptLength;
- (void)deleteResponseLength;
- (id)suppressMessageUnderConditions;

@end
