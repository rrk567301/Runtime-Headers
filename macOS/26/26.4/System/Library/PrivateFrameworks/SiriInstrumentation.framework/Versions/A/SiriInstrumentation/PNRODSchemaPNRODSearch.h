@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODSearch : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchToolId;
@property (nonatomic) BOOL hasSearchToolId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchTotalHandleTime;
@property (nonatomic) BOOL hasSearchTotalHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *spotlightTotalTime;
@property (nonatomic) BOOL hasSpotlightTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *answerSynthesisTime;
@property (nonatomic) BOOL hasAnswerSynthesisTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchGlobalSearchTime;
@property (nonatomic) BOOL hasSearchGlobalSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchHallucinationTime;
@property (nonatomic) BOOL hasSearchHallucinationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchStartToSpotlightEnd;
@property (nonatomic) BOOL hasSearchStartToSpotlightEnd;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchStartToGlobalSearchEnd;
@property (nonatomic) BOOL hasSearchStartToGlobalSearchEnd;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *preSearchTime;
@property (nonatomic) BOOL hasPreSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *postSearchTime;
@property (nonatomic) BOOL hasPostSearchTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
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

@end
