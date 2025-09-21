@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _indices;
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char length : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long indicesCount;
@property (readonly, nonatomic) unsigned long long *indices;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;
@property (nonatomic) char hasLength;
@property (nonatomic) unsigned long long length;

+ (id)sparseFloatVectorFromModelWeights:(id)a0;
+ (id)sparseFloatVectorFromSparseVector:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (float)valueAtIndex:(unsigned long long)a0;
- (void)clearValues;
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)addIndices:(unsigned long long)a0;
- (unsigned long long)indicesAtIndex:(unsigned long long)a0;
- (void)clearIndices;
- (void)setIndices:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;

@end
