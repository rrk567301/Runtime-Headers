@interface MPSNDArrayGatherMatrixMultiplication : MPSNDArrayMatrixMultiplication

@property (readonly, nonatomic) BOOL isSorted;
@property (readonly, nonatomic) unsigned long long batchDims;

+ (BOOL)supportsPostfixForDevice:(void *)a0;
+ (BOOL)supportsPrefixForDevice:(void *)a0;

- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (id)encodePreProcessingToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id *)a3 kernelDAGObject:(id *)a4;
- (id)initWithDevice:(id)a0 isSorted:(BOOL)a1 batchDims:(unsigned long long)a2 sourceCount:(unsigned long long)a3;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0 destinationArrays:(id)a1 kernelDAGObject:(id)a2;

@end
