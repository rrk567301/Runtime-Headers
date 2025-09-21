@class MTLDebugInstrumentationData, NSString, MTLIOAccelResource;
@protocol MTLDevice;

@interface GFX9AMD_MtlComputePipelineState : _MTLComputePipelineState <MTLComputePipelineStateSPI> {
    struct AMD_ComputePipelineStateMembersRec { MTLIOAccelResource *scratchBuffer; struct AMDPPMemBlockRec { union { struct AMDPPMemObjRec *host; struct AMDPPMemObjHeaderRec *hostHeader; } ; unsigned int offset; unsigned int dataSize; struct AMDPPMemBlockRec *prev; struct AMDPPMemBlockRec *next; } psoMemBuf; unsigned int psoCmds[32]; int shaderSource; unsigned long long rsrcIndex; struct AMD_MtlRgpPipeline *traceData; unsigned char isRsrcIndexReserved : 1; unsigned int reserved : 31; char icbCapable; } m_members;
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
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) char supportIndirectCommandBuffers;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) long long shaderValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dumpParameters:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a0;
+ (unsigned int)getScratchBufferSizeFromParams:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a0;
+ (unsigned int)getMaxOccupancyWavesPerCU:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a0;
+ (void)getScratchInfoFromParams:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a0 outputWaves:(unsigned int *)a1 outputWaveSize:(unsigned int *)a2;

- (void)dealloc;
- (id)functionHandleWithFunction:(id)a0;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (id)pipelineBinaries;
- (id)initWithDevice:(id)a0 pipelineDescriptor:(id)a1 shaderSource:(int)a2;

@end
