@class NSData, SISchemaUUID;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationAppsOrder : 1; unsigned char disambiguationReasons : 1; unsigned char modelVersion : 1; unsigned char numDisambiguationApps : 1; unsigned char trialDeploymentId : 1; } _has;
}

@property (nonatomic) int disambiguationAppsOrder;
@property (nonatomic) BOOL hasDisambiguationAppsOrder;
@property (nonatomic) int disambiguationReasons;
@property (nonatomic) BOOL hasDisambiguationReasons;
@property (nonatomic) long long modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) int numDisambiguationApps;
@property (nonatomic) BOOL hasNumDisambiguationApps;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) BOOL hasTrialTreatmentId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteModelVersion;
- (void)deleteDisambiguationAppsOrder;
- (void)deleteDisambiguationReasons;
- (void)deleteNumDisambiguationApps;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialTreatmentId;

@end
