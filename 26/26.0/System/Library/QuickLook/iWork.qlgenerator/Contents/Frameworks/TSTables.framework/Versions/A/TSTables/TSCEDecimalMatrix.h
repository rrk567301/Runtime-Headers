@interface TSCEDecimalMatrix : NSObject <NSCopying> {
    struct TSCEGridDimensions { unsigned int width; unsigned int height; } _dimensions;
    struct vector<TSUDecimal, std::allocator<TSUDecimal>> { struct TSUDecimal *__begin_; struct TSUDecimal *__end_; struct TSUDecimal *__cap_; } _values;
}

@property (readonly, nonatomic) unsigned long long area;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) BOOL isSquareMatrix;
@property (readonly, nonatomic) struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } dimensions;

+ (id)identityMatrixOfSize:(unsigned int)a0;

- (id)initWithDimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)multiplyByScalar:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
- (id).cxx_construct;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)transpose;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })valueAt1DIndex:(unsigned long long)a0;
- (id)adjointMatrix;
- (unsigned long long)classifyMatrix;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })cofactorAtCoord:(struct TSCEGridCoord { unsigned int x0; unsigned int x1; })a0;
- (id)cofactorMatrix;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })determinantWithError:(id *)a0;
- (id)inverseWithError:(id *)a0;
- (id)multiplyBy:(id)a0 outError:(id *)a1;
- (id)pivotMatrixOutDet:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
- (struct vector<TSCEDecimalMatrix *, std::allocator<TSCEDecimalMatrix *>> { id *x0; id *x1; id *x2; })pluDecompositionWithPivotDet:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })productOfDiagonal;
- (void)setValue:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 atCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a1;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })simpleRecursiveDeterminant;
- (void)swapColumnAtIndex:(unsigned int)a0 withColumnAtIndex:(unsigned int)a1;
- (void)swapRowAtIndex:(unsigned int)a0 withRowAtIndex:(unsigned int)a1;
- (void)swapValueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 withCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a1;
- (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })valueAtCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0;

@end
