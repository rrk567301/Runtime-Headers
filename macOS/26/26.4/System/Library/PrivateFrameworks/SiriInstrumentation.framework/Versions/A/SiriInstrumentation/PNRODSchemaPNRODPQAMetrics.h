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
- (void)deleteAnswerSynthesisTime;
- (void)deleteLlmQUTotalTime;
- (void)deleteOverallTime;
- (void)deleteSearchToolId;
- (void)deleteSpotlightTotalTime;

@end
