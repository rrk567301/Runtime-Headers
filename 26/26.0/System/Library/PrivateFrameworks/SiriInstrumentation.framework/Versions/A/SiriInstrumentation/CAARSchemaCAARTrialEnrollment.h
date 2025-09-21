@class NSString, NSData;

@interface CAARSchemaCAARTrialEnrollment : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteRolloutId;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;

@end
