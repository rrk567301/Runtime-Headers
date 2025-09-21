@class NSString, NSData, SISchemaUUID;

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char trialDeploymentId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *dodMlId;
@property (nonatomic) char hasDodMlId;
@property (copy, nonatomic) NSString *experimentName;
@property (nonatomic) char hasExperimentName;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (nonatomic) char hasTrialExperimentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) char hasTrialTreatmentId;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) char hasTrialDeploymentId;
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
- (void)deleteDodMlId;
- (void)deleteExperimentName;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialExperimentId;
- (void)deleteTrialTreatmentId;
- (id)suppressMessageUnderConditions;

@end
