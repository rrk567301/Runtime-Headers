@class NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationAppsOrder : 1; unsigned char disambiguationReasons : 1; unsigned char modelVersion : 1; unsigned char numDisambiguationApps : 1; unsigned char trialDeploymentId : 1; } _has;
}

@property (nonatomic) int disambiguationAppsOrder;
@property (nonatomic) char hasDisambiguationAppsOrder;
@property (nonatomic) int disambiguationReasons;
@property (nonatomic) char hasDisambiguationReasons;
@property (nonatomic) long long modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) int numDisambiguationApps;
@property (nonatomic) char hasNumDisambiguationApps;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) char hasTrialDeploymentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) char hasTrialTreatmentId;
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
- (void)deleteDisambiguationAppsOrder;
- (void)deleteDisambiguationReasons;
- (void)deleteModelVersion;
- (void)deleteNumDisambiguationApps;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialTreatmentId;
- (id)suppressMessageUnderConditions;

@end
