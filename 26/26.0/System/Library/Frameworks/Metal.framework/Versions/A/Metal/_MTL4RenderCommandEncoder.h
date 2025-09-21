@class NSString;
@protocol MTL4CommandAllocator, MTL4CommandBuffer;

@interface _MTL4RenderCommandEncoder : _MTL4CommandEncoder <MTL4RenderCommandEncoderGGDSPI>

@property unsigned long long tileWidth;
@property unsigned long long tileHeight;
@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTL4CommandBuffer> commandBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTL4CommandAllocator> commandAllocator;

- (void)setLineWidth:(float)a0;
- (void)setViewport:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)isMemorylessRender;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setVertexAmplificationCount:(unsigned long long)a0 viewMappings:(const struct { unsigned int x0; unsigned int x1; } *)a1;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthClipModeSPI:(unsigned long long)a0;
- (void)setVisibilityResultMode:(unsigned long long)a0 offset:(unsigned long long)a1;
- (void)setScissorRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 withRenderTargetArrayIndex:(unsigned int)a2;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4 instanceCount:(unsigned long long)a5;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexType:(unsigned long long)a1 indexBuffer:(unsigned long long)a2 indexBufferLength:(unsigned long long)a3 indirectBuffer:(unsigned long long)a4;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(unsigned long long)a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(unsigned long long)a1;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(unsigned long long)a1;
- (void)setArgumentTable:(id)a0 atStages:(unsigned long long)a1;
- (void)setBlendColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)setColorAttachmentMap:(id)a0;
- (void)setCommandDataCorruptModeSPI:(unsigned long long)a0;
- (void)setCullMode:(unsigned long long)a0;
- (void)setDepthBias:(float)a0 slopeScale:(float)a1 clamp:(float)a2;
- (void)setDepthClipMode:(unsigned long long)a0;
- (void)setDepthStencilState:(id)a0;
- (void)setDepthTestMinBound:(float)a0 maxBound:(float)a1;
- (void)setFrontFacingWinding:(unsigned long long)a0;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineState:(id)a0;
- (void)setScissorRects:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 count:(unsigned long long)a1;
- (void)setStencilFrontReferenceValue:(unsigned int)a0 backReferenceValue:(unsigned int)a1;
- (void)setStencilReferenceValue:(unsigned int)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setToolsDispatchBufferSPI:(unsigned long long)a0 atIndex:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)setTriangleFillMode:(unsigned long long)a0;
- (void)setVertexAmplificationMode:(unsigned long long)a0 value:(unsigned long long)a1;
- (void)setViewports:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 count:(unsigned long long)a1;
- (void)writeTimestampWithGranularity:(long long)a0 afterStage:(unsigned long long)a1 intoHeap:(id)a2 atIndex:(unsigned long long)a3;
- (id)initWithCommandAllocator:(id)a0;

@end
