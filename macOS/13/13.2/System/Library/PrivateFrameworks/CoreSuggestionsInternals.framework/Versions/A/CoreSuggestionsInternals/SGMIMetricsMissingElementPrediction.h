@interface SGMIMetricsMissingElementPrediction : PBCodable <NSCopying> {
    struct { unsigned char predictedMissingElementScore : 1; unsigned char foundMatchingElement : 1; } _has;
}

@property (nonatomic) BOOL hasPredictedMissingElementScore;
@property (nonatomic) float predictedMissingElementScore;
@property (nonatomic) BOOL hasFoundMatchingElement;
@property (nonatomic) BOOL foundMatchingElement;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
