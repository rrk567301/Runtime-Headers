@interface CLPLOGENTRYVISIONSimdDoubleM : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _values;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) double *values;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearValues;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addValues:(double)a0;
- (double)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(double *)a0 count:(unsigned long long)a1;

@end
