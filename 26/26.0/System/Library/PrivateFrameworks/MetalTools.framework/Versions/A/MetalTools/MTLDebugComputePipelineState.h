@class MTL4ComputePipelineDescriptor, MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
}

@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) MTLComputePipelineDescriptor *descriptor;
@property (readonly, nonatomic) MTLComputePipelineReflection *validationReflection;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;
@property (readonly, nonatomic) MTL4ComputePipelineDescriptor *mtl4Descriptor;

- (id)functionHandleWithBinaryFunction:(id)a0;
- (id)functionHandleWithFunction:(id)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void)initCommon;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)functionHandleToDebugFunctionHandle:(id)a0;
- (id)functionHandleToDebugFunctionHandle:(id)a0 binaryFunction:(id)a1;
- (id)functionHandleToDebugFunctionHandle:(id)a0 parentFunction:(id)a1;
- (id)functionHandleWithName:(id)a0;
- (id)initWithComputePipelineState:(id)a0 parent:(id)a1 mtl4Descriptor:(id)a2;
- (id)initWithComputePipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (id)initWithComputePipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 mtl4Descriptor:(id)a3;
- (BOOL)isAncestorOf:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 resourceIndices:(unsigned long long *)a1 error:(id *)a2;
- (id)newComputePipelineStateWithBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (void)validateHandleForSetFunction:(id)a0;

@end
