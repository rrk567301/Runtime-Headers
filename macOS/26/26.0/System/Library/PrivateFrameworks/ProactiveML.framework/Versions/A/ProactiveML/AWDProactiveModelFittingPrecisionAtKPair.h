@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {
    struct { unsigned char k : 1; unsigned char precision : 1; } _has;
}

@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned long long k;
@property (nonatomic) BOOL hasPrecision;
@property (nonatomic) float precision;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
