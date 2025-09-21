@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODSearch : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchToolId;
@property (nonatomic) char hasSearchToolId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchTotalHandleTime;
@property (nonatomic) char hasSearchTotalHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *spotlightTotalTime;
@property (nonatomic) char hasSpotlightTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *answerSynthesisTime;
@property (nonatomic) char hasAnswerSynthesisTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchGlobalSearchTime;
@property (nonatomic) char hasSearchGlobalSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchHallucinationTime;
@property (nonatomic) char hasSearchHallucinationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchStartToSpotlightEnd;
@property (nonatomic) char hasSearchStartToSpotlightEnd;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchStartToGlobalSearchEnd;
@property (nonatomic) char hasSearchStartToGlobalSearchEnd;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *preSearchTime;
@property (nonatomic) char hasPreSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *postSearchTime;
@property (nonatomic) char hasPostSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) char hasFailureInfo;
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
- (void)deleteSearchStartToSpotlightEnd;
- (void)deleteAnswerSynthesisTime;
- (void)deleteFailureInfo;
- (void)deletePostSearchTime;
- (void)deletePreSearchTime;
- (void)deleteSearchGlobalSearchTime;
- (void)deleteSearchHallucinationTime;
- (void)deleteSearchStartToGlobalSearchEnd;
- (void)deleteSearchToolId;
- (void)deleteSearchTotalHandleTime;
- (void)deleteSpotlightTotalTime;
- (id)suppressMessageUnderConditions;

@end
