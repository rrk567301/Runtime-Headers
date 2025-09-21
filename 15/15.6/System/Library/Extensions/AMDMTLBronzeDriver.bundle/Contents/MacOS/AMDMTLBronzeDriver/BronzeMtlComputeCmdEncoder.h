@class NSString, BronzeMtlComputePipelineState, MTLIOAccelResource, BronzeMtlCmdBuffer;
@protocol MTLDevice, MTLBuffer;

@interface BronzeMtlComputeCmdEncoder : MTLIOAccelComputeCommandEncoder <MTLComputeCommandEncoderSPI, AmdPrivateCommandEncoder> {
    struct BronzeComputeCmdEncoderMembersRec { BronzeMtlCmdBuffer *cmdBuffer; struct BronzeCmdBufInfoRec *cmdBufInfo; struct BronzeRsrcMgrRec *rsrcMgr; struct AMDBitVectorRec *knownExpandedVec; BronzeMtlComputePipelineState *computePipelineState; struct BronzeComputePipelineStateMembersRec *computePipelineStateMembers; struct BronzeMtlComputeVariantMembersRec *computeVariantMembers; BOOL isCurrPsoUseIndirectCmdBuffer; struct BronzeResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } computeResources[180]; unsigned int dynamicThreadgroupMemoryLength[32]; struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } stageInRegion; struct ComputeStageInRangeRec { unsigned int originX; unsigned int originY; unsigned int originZ; unsigned int sizeX; unsigned int sizeY; unsigned int sizeZ; } computeStageInRegion; unsigned char isIndirectStageIn : 1; unsigned char counterSampling : 3; unsigned char icbTracing : 1; unsigned int reserved : 27; id<MTLBuffer> stageInIndirectBuffer; unsigned long long stageInIndirectBufferOffset; struct BronzeMtlStatistics *statsMgr; struct BronzeMtlSpmTracer *pSPMTracer; struct BronzeMtlSpotTracer *pSpotTracer; unsigned long long cmdBufGlblTraceObjID; struct __IOAccelDevice *amdMtlDeviceRef; unsigned long long dispatch_Type; struct BronzeDeviceMembersRec *deviceMembers; unsigned int prevIcbPsoResourceListCount; unsigned int prevIcbRodataResourceListCount; unsigned int prevIcbScratchResourceListCount; MTLIOAccelResource *shaderRsrc; MTLIOAccelResource *tempBufRsrc; MTLIOAccelResource *cmdBufRsrc; unsigned int tempOffset; unsigned int cmdBufOffset; void *apiLayerData; } m_members;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dispatchType;

- (void)dealloc;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (id)newKernelDebugInfo;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(char)a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBufferOffset:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 attributeStrides:(const unsigned long long *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setComputePipelineState:(id)a0;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)updateFence:(id)a0;
- (void)useHeap:(id)a0;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)waitForFence:(id)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void)useComputePipelineStates:(const id *)a0 count:(unsigned long long)a1;
- (void)dirtyTsQueryBuffer;
- (void)getTimestampAtOffset:(unsigned long long)a0;
- (void)useComputePipelineState:(id)a0;

@end
