@interface SGMIMetricsAggregatedAccuracyLog : PBCodable <NSCopying> {
    struct { unsigned char ignorablePredictedAsIgnorable : 1; unsigned char ignorablePredictedAsNeutral : 1; unsigned char ignorablePredictedAsSalient : 1; unsigned char neutralPredictedAsIgnorable : 1; unsigned char neutralPredictedAsNeutral : 1; unsigned char neutralPredictedAsSalient : 1; unsigned char salientPredictedAsIgnorable : 1; unsigned char salientPredictedAsNeutral : 1; unsigned char salientPredictedAsSalient : 1; } _has;
}

@property (nonatomic) char hasSalientPredictedAsSalient;
@property (nonatomic) unsigned int salientPredictedAsSalient;
@property (nonatomic) char hasSalientPredictedAsNeutral;
@property (nonatomic) unsigned int salientPredictedAsNeutral;
@property (nonatomic) char hasSalientPredictedAsIgnorable;
@property (nonatomic) unsigned int salientPredictedAsIgnorable;
@property (nonatomic) char hasNeutralPredictedAsSalient;
@property (nonatomic) unsigned int neutralPredictedAsSalient;
@property (nonatomic) char hasNeutralPredictedAsNeutral;
@property (nonatomic) unsigned int neutralPredictedAsNeutral;
@property (nonatomic) char hasNeutralPredictedAsIgnorable;
@property (nonatomic) unsigned int neutralPredictedAsIgnorable;
@property (nonatomic) char hasIgnorablePredictedAsSalient;
@property (nonatomic) unsigned int ignorablePredictedAsSalient;
@property (nonatomic) char hasIgnorablePredictedAsNeutral;
@property (nonatomic) unsigned int ignorablePredictedAsNeutral;
@property (nonatomic) char hasIgnorablePredictedAsIgnorable;
@property (nonatomic) unsigned int ignorablePredictedAsIgnorable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
