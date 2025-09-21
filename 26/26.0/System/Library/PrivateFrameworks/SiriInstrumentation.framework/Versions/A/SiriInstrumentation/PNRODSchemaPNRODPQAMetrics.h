@class NSData, PNRODSchemaPNRODMetricDuration, SISchemaUUID;

@interface PNRODSchemaPNRODPQAMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchToolId;
@property (nonatomic) BOOL hasSearchToolId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *overallTime;
@property (nonatomic) BOOL hasOverallTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *llmQUTotalTime;
@property (nonatomic) BOOL hasLlmQUTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *spotlightTotalTime;
@property (nonatomic) BOOL hasSpotlightTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *answerSynthesisTime;
@property (nonatomic) BOOL hasAnswerSynthesisTime;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAnswerSynthesisTime;
- (void)deleteLlmQUTotalTime;
- (void)deleteOverallTime;
- (void)deleteSearchToolId;
- (void)deleteSpotlightTotalTime;

@end
