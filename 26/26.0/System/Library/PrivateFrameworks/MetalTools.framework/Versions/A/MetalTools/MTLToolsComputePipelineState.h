@class MTLDebugInstrumentationData, MTLComputePipelineReflection, NSString;
@protocol MTLFunction, MTLDevice;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {
    id<MTLFunction> _function;
}

@property (readonly) long long textureWriteRoundingMode;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) unsigned long long gpuHandle;
@property (readonly, nonatomic) long long shaderValidationState;
@property (readonly) MTLComputePipelineReflection *reflection;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } requiredThreadsPerThreadgroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)functionHandleWithBinaryFunction:(id)a0;
- (id)functionHandleWithFunction:(id)a0;
- (void)dealloc;
- (id)pipelineBinaries;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)functionHandleWithName:(id)a0;
- (id)functionReflectionWithFunctionDescriptor:(id)a0;
- (unsigned int)getComputeKernelTelemetryID;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 resourceIndices:(unsigned long long *)a1 error:(id *)a2;
- (id)newComputePipelineStateWithBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;

@end
