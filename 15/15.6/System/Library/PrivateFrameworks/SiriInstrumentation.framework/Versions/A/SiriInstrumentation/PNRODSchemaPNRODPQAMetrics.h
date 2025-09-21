@class NSData, PNRODSchemaPNRODMetricDuration, SISchemaUUID;

@interface PNRODSchemaPNRODPQAMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchToolId;
@property (nonatomic) char hasSearchToolId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *overallTime;
@property (nonatomic) char hasOverallTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *llmQUTotalTime;
@property (nonatomic) char hasLlmQUTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *spotlightTotalTime;
@property (nonatomic) char hasSpotlightTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *answerSynthesisTime;
@property (nonatomic) char hasAnswerSynthesisTime;
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
- (void)deleteAnswerSynthesisTime;
- (void)deleteLlmQUTotalTime;
- (void)deleteOverallTime;
- (void)deleteSearchToolId;
- (void)deleteSpotlightTotalTime;
- (id)suppressMessageUnderConditions;

@end
