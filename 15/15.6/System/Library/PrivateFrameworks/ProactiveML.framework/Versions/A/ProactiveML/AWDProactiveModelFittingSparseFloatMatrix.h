@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _columnIndices;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rowIndices;
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char columnLength : 1; unsigned char rowLength : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long columnIndicesCount;
@property (readonly, nonatomic) unsigned long long *columnIndices;
@property (nonatomic) char hasColumnLength;
@property (nonatomic) unsigned long long columnLength;
@property (readonly, nonatomic) unsigned long long rowIndicesCount;
@property (readonly, nonatomic) unsigned long long *rowIndices;
@property (nonatomic) char hasRowLength;
@property (nonatomic) unsigned long long rowLength;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;

+ (id)sparseFloatMatrixFromDenseMatrix:(id)a0;
+ (id)sparseFloatMatrixFromSparseMatrix:(id)a0;

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
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)clearRowIndices;
- (void)addColumnIndices:(unsigned long long)a0;
- (void)addRowIndices:(unsigned long long)a0;
- (void)clearColumnIndices;
- (unsigned long long)columnIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)rowIndicesAtIndex:(unsigned long long)a0;
- (void)setColumnIndices:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setRowIndices:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;
- (float)valueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;

@end
