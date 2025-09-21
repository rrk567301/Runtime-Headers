@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) char hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;

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
