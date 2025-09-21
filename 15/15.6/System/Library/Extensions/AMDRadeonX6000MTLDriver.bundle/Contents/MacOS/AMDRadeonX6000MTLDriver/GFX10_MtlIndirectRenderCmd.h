@class NSString, GFX10_MtlDevice, GFXAAMD_MtlIndirectCmdBuffer;

@interface GFX10_MtlIndirectRenderCmd : MTLIOAccelIndirectRenderCommand <GFXAAMD_MtlIndirectCmd, MTLIndirectRenderCommandSPI> {
    struct GFX10_IndirectRenderCmdMembersRec { GFXAAMD_MtlIndirectCmdBuffer *icb; struct IndirectCommandBufferHeader *icbHeader; GFX10_MtlDevice *device; unsigned long long cmdBuf; unsigned int cmdIndex; } m_members;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObjectBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setMeshSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)clearBarrier;
- (id)drawArguments;
- (id)drawIndexedArguments;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11;
- (id)drawIndexedPatchesArguments;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)drawMeshThreadgroupsArguments;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)drawMeshThreadsArguments;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9;
- (id)drawPatchesArguments;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (unsigned long long)getCommandType;
- (unsigned long long)getFragmentBufferAddressAtIndex:(unsigned long long)a0;
- (void *)getFragmentBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getMeshBufferAddressAtIndex:(unsigned long long)a0;
- (unsigned long long)getObjectBufferAddressAtIndex:(unsigned long long)a0;
- (unsigned long long)getObjectThreadgroupMemoryLengthAtIndex:(unsigned long long)a0;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (id)getTessellationFactorArguments;
- (unsigned long long)getVertexAttributeStrideAtIndex:(unsigned long long)a0;
- (unsigned long long)getVertexBufferAddressAtIndex:(unsigned long long)a0;
- (void *)getVertexBufferAtIndex:(unsigned long long)a0;
- (char)hasBarrier;
- (void)reset;
- (void)setBarrier;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setMeshBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setMeshBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setMeshBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setMeshBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setMeshSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMeshSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setMeshSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setMeshTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMeshTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setObjectBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setObjectBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setObjectSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObjectSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setObjectSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setObjectSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObjectTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineState:(id)a0;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11 tessellationFactorBufferScale:(float)a12;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9 tessellationFactorBufferScale:(float)a10;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)getPipelineState;
- (struct { unsigned int x0[3]; } *)drawMeshArguments;
- (void *)getMeshBufferAtIndex:(unsigned long long)a0;
- (void *)getObjectBufferAtIndex:(unsigned long long)a0;
- (id)initWithBuffer:(id)a0 device:(id)a1 atIndex:(unsigned int)a2;

@end
