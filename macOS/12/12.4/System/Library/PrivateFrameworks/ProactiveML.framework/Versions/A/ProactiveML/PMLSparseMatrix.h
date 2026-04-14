@interface PMLSparseMatrix : NSObject

@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) BOOL isSymmetric;
@property (nonatomic) struct sparse_m_float { } *matrix;

+ (id)sparseMatrixWithNumberOfRows:(unsigned long long)a0 numberOfColumns:(unsigned long long)a1;
+ (id)sparseMatrixFromNumbers:(id)a0;

- (void)dealloc;
- (id)init;
- (float)minValue;
- (float)maxValue;
- (id)matrixWithConstantColumn;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (id)initWithSparseMatrix:(struct sparse_m_float { } *)a0;
- (void)_enumerateSparseRowsWithBlock:(id /* block */)a0;
- (float)valueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (void)enumerateNonZeroValuesForRow:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
