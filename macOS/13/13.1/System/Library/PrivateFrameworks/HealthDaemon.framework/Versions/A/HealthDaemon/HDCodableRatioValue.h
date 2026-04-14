@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNumerator;
@property (retain, nonatomic) HDCodableCodedQuantity *numerator;
@property (readonly, nonatomic) BOOL hasDenominator;
@property (retain, nonatomic) HDCodableCodedQuantity *denominator;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
