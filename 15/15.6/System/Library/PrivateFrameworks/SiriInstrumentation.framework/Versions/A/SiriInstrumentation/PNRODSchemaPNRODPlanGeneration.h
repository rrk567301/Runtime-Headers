@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODPlanGeneration : SISchemaInstrumentationMessage {
    struct { unsigned char pgModelInterface : 1; unsigned char pgOverridesMatched : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) char hasPlanCycleId;
@property (nonatomic) int pgModelInterface;
@property (nonatomic) char hasPgModelInterface;
@property (copy, nonatomic) NSString *pgModelIdentifier;
@property (nonatomic) char hasPgModelIdentifier;
@property (copy, nonatomic) NSString *pgOverridesAssetVersion;
@property (nonatomic) char hasPgOverridesAssetVersion;
@property (nonatomic) char pgOverridesMatched;
@property (nonatomic) char hasPgOverridesMatched;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgPlanGenTotalTime;
@property (nonatomic) char hasPgPlanGenTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerHandleTime;
@property (nonatomic) char hasPgFullPlannerHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgModelInferenceTime;
@property (nonatomic) char hasPgModelInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgOverridesTime;
@property (nonatomic) char hasPgOverridesTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgPrescribedPlanTime;
@property (nonatomic) char hasPgPrescribedPlanTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerPreInferenceTime;
@property (nonatomic) char hasPgFullPlannerPreInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerPostInferenceTime;
@property (nonatomic) char hasPgFullPlannerPostInferenceTime;
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
- (void)deleteFailureInfo;
- (void)deletePgFullPlannerHandleTime;
- (void)deletePgFullPlannerPostInferenceTime;
- (void)deletePgFullPlannerPreInferenceTime;
- (void)deletePgModelIdentifier;
- (void)deletePgModelInferenceTime;
- (void)deletePgModelInterface;
- (void)deletePgOverridesAssetVersion;
- (void)deletePgOverridesMatched;
- (void)deletePgOverridesTime;
- (void)deletePgPlanGenTotalTime;
- (void)deletePgPrescribedPlanTime;
- (void)deletePlanCycleId;
- (id)suppressMessageUnderConditions;

@end
