@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _columnIndices;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rowIndices;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char bucketSize : 1; unsigned char columnLength : 1; unsigned char minValue : 1; unsigned char rowLength : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long columnIndicesCount;
@property (readonly, nonatomic) unsigned int *columnIndices;
@property (nonatomic) char hasColumnLength;
@property (nonatomic) unsigned int columnLength;
@property (readonly, nonatomic) unsigned long long rowIndicesCount;
@property (readonly, nonatomic) unsigned int *rowIndices;
@property (nonatomic) char hasRowLength;
@property (nonatomic) unsigned int rowLength;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) unsigned int *values;
@property (nonatomic) char hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) char hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedSparseMatrixFromSparseMatrix:(id)a0 numberOfBuckets:(unsigned long long)a1;

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
- (void)clearValues;
- (void)addValues:(unsigned int)a0;
- (unsigned int)valuesAtIndex:(unsigned long long)a0;
- (void)clearRowIndices;
- (void)addColumnIndices:(unsigned int)a0;
- (void)addRowIndices:(unsigned int)a0;
- (void)clearColumnIndices;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)a0;
- (float)originalValueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)a0;
- (void)setColumnIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRowIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setValues:(unsigned int *)a0 count:(unsigned long long)a1;

@end
