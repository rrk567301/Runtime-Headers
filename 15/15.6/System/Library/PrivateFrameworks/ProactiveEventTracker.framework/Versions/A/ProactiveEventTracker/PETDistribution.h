@interface PETDistribution : PBCodable <NSCopying> {
    struct { unsigned char max : 1; unsigned char mean : 1; unsigned char min : 1; unsigned char variance : 1; } _has;
}

@property (nonatomic) char hasMin;
@property (nonatomic) double min;
@property (nonatomic) char hasMax;
@property (nonatomic) double max;
@property (nonatomic) char hasMean;
@property (nonatomic) double mean;
@property (nonatomic) char hasVariance;
@property (nonatomic) double variance;

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
