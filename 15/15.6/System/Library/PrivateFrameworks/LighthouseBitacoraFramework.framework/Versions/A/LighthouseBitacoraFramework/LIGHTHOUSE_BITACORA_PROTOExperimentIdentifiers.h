@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) char hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) char hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
