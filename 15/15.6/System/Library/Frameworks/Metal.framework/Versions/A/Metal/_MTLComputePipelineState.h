@class NSString, MTLDebugInstrumentationData;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {
    char _supportIndirectCommandBuffers;
    long long _textureWriteRoundingMode;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long gpuHandle;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly, nonatomic) long long shaderValidationState;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) char supportIndirectCommandBuffers;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)functionHandleWithFunction:(id)a0;
- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (id)pipelineBinaries;
- (id)initWithParent:(id)a0;
- (id)initWithDevice:(id)a0 pipelineStateDescriptor:(id)a1;
- (long long)textureWriteFPRoundingMode;

@end
