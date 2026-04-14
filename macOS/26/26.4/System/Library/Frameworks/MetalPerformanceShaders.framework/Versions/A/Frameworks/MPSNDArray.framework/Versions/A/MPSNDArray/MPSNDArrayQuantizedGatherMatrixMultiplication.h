@interface MPSNDArrayQuantizedGatherMatrixMultiplication : MPSNDArrayQuantizedMatrixMultiplication

@property (readonly, nonatomic) BOOL isSorted;
@property (readonly, nonatomic) unsigned long long batchDims;

+ (BOOL)supportsPostfixForDevice:(void *)a0;
+ (BOOL)supportsPrefixForDevice:(void *)a0;

- (id)encodePreProcessingToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceArrays:(id)a2 destinationArray:(id *)a3 kernelDAGObject:(id *)a4;
- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2 isSorted:(BOOL)a3 batchDims:(unsigned long long)a4 sourceCount:(unsigned long long)a5;
- (id)initWithDevice:(id)a0 leftQuantizationDescriptor:(id)a1 rightQuantizationDescriptor:(id)a2 sourceCount:(unsigned long long)a3;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0 destinationArrays:(id)a1 kernelDAGObject:(id)a2;

@end
