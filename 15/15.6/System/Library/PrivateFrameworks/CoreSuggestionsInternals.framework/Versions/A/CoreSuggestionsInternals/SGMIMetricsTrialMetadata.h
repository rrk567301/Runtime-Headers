@class NSString;

@interface SGMIMetricsTrialMetadata : PBCodable <NSCopying> {
    struct { unsigned char deploymentId : 1; } _has;
}

@property (readonly, nonatomic) char hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int deploymentId;

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
