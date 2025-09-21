@class NSString, NSData, SISchemaUUID;

@interface EXPSchemaEXPTrialExperiment : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; unsigned char allocationStatus : 1; unsigned char lastUpdatedAtInMs : 1; unsigned char compatibilityVersion : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentNamespace;
@property (nonatomic) char hasExperimentNamespace;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (retain, nonatomic) SISchemaUUID *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) long long deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int allocationStatus;
@property (nonatomic) char hasAllocationStatus;
@property (nonatomic) unsigned long long lastUpdatedAtInMs;
@property (nonatomic) char hasLastUpdatedAtInMs;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) char hasCompatibilityVersion;
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
- (void)deleteAllocationStatus;
- (void)deleteCompatibilityVersion;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteExperimentNamespace;
- (void)deleteLastUpdatedAtInMs;
- (void)deleteTreatmentId;
- (id)suppressMessageUnderConditions;

@end
