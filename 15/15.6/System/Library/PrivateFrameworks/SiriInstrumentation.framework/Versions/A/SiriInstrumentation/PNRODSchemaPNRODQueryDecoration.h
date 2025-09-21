@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODQueryDecoration : SISchemaInstrumentationMessage {
    struct { unsigned char queryDecorationSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *queryDecorationID;
@property (nonatomic) char hasQueryDecorationID;
@property (nonatomic) int queryDecorationSource;
@property (nonatomic) char hasQueryDecorationSource;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationHandleTime;
@property (nonatomic) char hasQueryDecorationHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationSpanRetrievalTime;
@property (nonatomic) char hasQueryDecorationSpanRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationContextRetrievalTime;
@property (nonatomic) char hasQueryDecorationContextRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationToolRetrievalTime;
@property (nonatomic) char hasQueryDecorationToolRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationRankingTime;
@property (nonatomic) char hasQueryDecorationRankingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationOutputBuildingTime;
@property (nonatomic) char hasQueryDecorationOutputBuildingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationTupleBuildingTime;
@property (nonatomic) char hasQueryDecorationTupleBuildingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationTupleRankingTime;
@property (nonatomic) char hasQueryDecorationTupleRankingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationInputCollectionTime;
@property (nonatomic) char hasQueryDecorationInputCollectionTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationToolRetrievalContextTime;
@property (nonatomic) char hasQueryDecorationToolRetrievalContextTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationFetchDynamicEnumerationTime;
@property (nonatomic) char hasQueryDecorationFetchDynamicEnumerationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationFullPlannerBlockingTime;
@property (nonatomic) char hasQueryDecorationFullPlannerBlockingTime;
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
- (void)deleteQueryDecorationHandleTime;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailureInfo;
- (void)deleteQueryDecorationContextRetrievalTime;
- (void)deleteQueryDecorationFetchDynamicEnumerationTime;
- (void)deleteQueryDecorationFullPlannerBlockingTime;
- (void)deleteQueryDecorationID;
- (void)deleteQueryDecorationInputCollectionTime;
- (void)deleteQueryDecorationOutputBuildingTime;
- (void)deleteQueryDecorationRankingTime;
- (void)deleteQueryDecorationSource;
- (void)deleteQueryDecorationSpanRetrievalTime;
- (void)deleteQueryDecorationToolRetrievalContextTime;
- (void)deleteQueryDecorationToolRetrievalTime;
- (void)deleteQueryDecorationTupleBuildingTime;
- (void)deleteQueryDecorationTupleRankingTime;
- (id)suppressMessageUnderConditions;

@end
