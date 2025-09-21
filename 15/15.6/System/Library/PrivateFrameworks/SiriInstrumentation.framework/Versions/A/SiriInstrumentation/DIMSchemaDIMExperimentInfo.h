@class NSString, NSData, SISchemaUUID;

@interface DIMSchemaDIMExperimentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (retain, nonatomic) SISchemaUUID *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (nonatomic) long long deploymentId;
@property (nonatomic) char hasDeploymentId;
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
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;
- (id)suppressMessageUnderConditions;

@end
