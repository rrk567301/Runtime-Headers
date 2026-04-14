@interface CLPLOGENTRYVISIONSimdDoubleM : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _values;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) double *values;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addValues:(double)a0;
- (double)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(double *)a0 count:(unsigned long long)a1;

@end
