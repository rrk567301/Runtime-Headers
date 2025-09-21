@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODIntelligenceFlowSessionSummary : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clientSessionId;
@property (nonatomic) char hasClientSessionId;
@property (retain, nonatomic) SISchemaUUID *rawSessionId;
@property (nonatomic) char hasRawSessionId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *standardPlannerSetupTime;
@property (nonatomic) char hasStandardPlannerSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationServiceSetupTime;
@property (nonatomic) char hasQueryDecorationServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *fullPlannerServiceSetupTime;
@property (nonatomic) char hasFullPlannerServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *planOverridesServiceSetupTime;
@property (nonatomic) char hasPlanOverridesServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *planResolverServiceSetupTime;
@property (nonatomic) char hasPlanResolverServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationServiceSetupTime;
@property (nonatomic) char hasResponseGenerationServiceSetupTime;
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
- (void)deleteClientSessionId;
- (void)deleteFailureInfo;
- (void)deleteFullPlannerServiceSetupTime;
- (void)deletePlanOverridesServiceSetupTime;
- (void)deletePlanResolverServiceSetupTime;
- (void)deleteQueryDecorationServiceSetupTime;
- (void)deleteRawSessionId;
- (void)deleteResponseGenerationServiceSetupTime;
- (void)deleteStandardPlannerSetupTime;
- (id)suppressMessageUnderConditions;

@end
