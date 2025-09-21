@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable <NSCopying> {
    struct { unsigned char k : 1; unsigned char precision : 1; } _has;
}

@property (nonatomic) char hasK;
@property (nonatomic) unsigned long long k;
@property (nonatomic) char hasPrecision;
@property (nonatomic) float precision;

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
