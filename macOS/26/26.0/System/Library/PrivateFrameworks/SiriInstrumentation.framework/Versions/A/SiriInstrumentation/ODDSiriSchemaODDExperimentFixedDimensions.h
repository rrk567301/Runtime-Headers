@class NSString, NSData, SISchemaUUID;

@interface ODDSiriSchemaODDExperimentFixedDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) SISchemaUUID *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) long long deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;

@end
