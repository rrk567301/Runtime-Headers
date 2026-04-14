@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODIntelligenceFlowSessionSummary : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clientSessionId;
@property (nonatomic) BOOL hasClientSessionId;
@property (retain, nonatomic) SISchemaUUID *rawSessionId;
@property (nonatomic) BOOL hasRawSessionId;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *standardPlannerSetupTime;
@property (nonatomic) BOOL hasStandardPlannerSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationServiceSetupTime;
@property (nonatomic) BOOL hasQueryDecorationServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *fullPlannerServiceSetupTime;
@property (nonatomic) BOOL hasFullPlannerServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *planOverridesServiceSetupTime;
@property (nonatomic) BOOL hasPlanOverridesServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *planResolverServiceSetupTime;
@property (nonatomic) BOOL hasPlanResolverServiceSetupTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationServiceSetupTime;
@property (nonatomic) BOOL hasResponseGenerationServiceSetupTime;
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
- (void)deleteClientSessionId;
- (void)deleteFailureInfo;
- (void)deleteFullPlannerServiceSetupTime;
- (void)deletePlanOverridesServiceSetupTime;
- (void)deletePlanResolverServiceSetupTime;
- (void)deleteQueryDecorationServiceSetupTime;
- (void)deleteRawSessionId;
- (void)deleteResponseGenerationServiceSetupTime;
- (void)deleteStandardPlannerSetupTime;

@end
