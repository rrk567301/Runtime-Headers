@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
