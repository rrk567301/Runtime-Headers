@interface SGMIMetricsMissingElementPrediction : PBCodable <NSCopying> {
    struct { unsigned char predictedMissingElementScore : 1; unsigned char foundMatchingElement : 1; } _has;
}

@property (nonatomic) char hasPredictedMissingElementScore;
@property (nonatomic) float predictedMissingElementScore;
@property (nonatomic) char hasFoundMatchingElement;
@property (nonatomic) char foundMatchingElement;

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
