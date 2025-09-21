@class NSString;

@interface MTLIGIndirectRenderCommand : _MTLIndirectRenderCommand <MTLIndirectRenderCommandSPI> {
    struct IGAccelIndirectRenderCommandEncoder { id x0; char *x1; struct sIGIndirectRenderCommandHeader *x2; struct sIGIndirectRenderCommand *x3; char *x4; struct sIGPatchDrawData *x5; unsigned long long x6; char *x7; char *x8; char *x9; char *x10; char *x11; } *_pIndirectRenderEncoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)drawArguments;
- (id)drawIndexedArguments;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11;
- (id)drawIndexedPatchesArguments;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9;
- (id)drawPatchesArguments;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (unsigned long long)getCommandType;
- (unsigned long long)getFragmentBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (id)getTessellationFactorArguments;
- (unsigned long long)getVertexAttributeStrideAtIndex:(unsigned long long)a0;
- (unsigned long long)getVertexBufferAtIndex:(unsigned long long)a0;
- (void)reset;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setRenderPipelineState:(id)a0;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11 tessellationFactorBufferScale:(float)a12;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9 tessellationFactorBufferScale:(float)a10;
- (id)getPipelineState;
- (id)getTessFactorArguments;
- (id)initWithIndex:(unsigned long long)a0 buffer:(id)a1 header:(struct sIGIndirectRenderCommandHeader { struct sIndirectCommandBufferDebugHeader { unsigned long long x0; unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; struct sICBHeaderFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned int x7 : 25; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct sICBWorkaroundFlags { unsigned char x0 : 1; unsigned int x1 : 31; } x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned int x43; } *)a2 device:(id)a3;

@end
