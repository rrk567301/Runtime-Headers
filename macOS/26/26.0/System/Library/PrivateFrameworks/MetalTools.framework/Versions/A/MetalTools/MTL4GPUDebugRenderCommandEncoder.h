@class NSString, MTLToolsDepthStencilState, MTLGPUDebugRenderPipelineState;
@protocol MTL4ArgumentTable;

@interface MTL4GPUDebugRenderCommandEncoder : MTL4ToolsRenderCommandEncoder <MTLGPUDebugCommandEncoder> {
    unsigned int useResourceIteration;
    BOOL _tileStageActive;
    BOOL _tileStageUsed;
    BOOL _fragmentStageActive;
    BOOL _vertexStageActive;
    BOOL _objectStageActive;
    BOOL _meshStageActive;
    BOOL _enableUseResourceValidation;
    struct MTLGPUDebugTileThreadgroup { struct GPUDebugThreadgroupTableEntry { unsigned int offset; unsigned int length; } entries[32]; BOOL needsFlush; } _tileThreadgroup;
    struct MTLGPUDebugThreadgroupLengths { unsigned int threadgroupSizes[31]; struct GPUDebugThreadgroupTableEntry { unsigned int offset; unsigned int length; } entries[32]; BOOL needsFlush; } _meshThreadgroup;
    struct MTLGPUDebugThreadgroupLengths { unsigned int threadgroupSizes[31]; struct GPUDebugThreadgroupTableEntry { unsigned int offset; unsigned int length; } entries[32]; BOOL needsFlush; } _objectThreadgroup;
    struct Options { unsigned int x0; int x1; int x2; int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; } x5; } *_options;
    struct GPUDebugEventUUIDPacket { unsigned long long pipelineStateID; unsigned long long entryPointImageID; unsigned int encoderID; unsigned int eventID; } _drawID;
    long long _encoderType;
    MTLGPUDebugRenderPipelineState *_currentPipeline;
    MTLToolsDepthStencilState *_currentDepthStencil;
    id<MTL4ArgumentTable> currentArgumentTables[5];
    struct { unsigned char count; BOOL mappingsValid; struct { unsigned int viewportArrayIndexOffset; unsigned int renderTargetArrayIndexOffset; } mappings[2]; } _vertexAmpState;
    unsigned long long _internalBindingTables[5][40];
}

@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)eventID;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)setVertexAmplificationCount:(unsigned long long)a0 viewMappings:(const struct { unsigned int x0; unsigned int x1; } *)a1;
- (id).cxx_construct;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)getInternalValueForStage:(unsigned long long)a0 stage:(unsigned long long)a1;
- (void)prepareExecuteIndirect:(id)a0 variant:(struct variant<std::pair<MTLGPUDebugBuffer *, unsigned long>, MTLIndirectCommandBufferExecutionRange> { struct __impl<std::pair<MTLGPUDebugBuffer *, unsigned long>, MTLIndirectCommandBufferExecutionRange> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, std::pair<MTLGPUDebugBuffer *, unsigned long>, MTLIndirectCommandBufferExecutionRange> { char x0; struct __alt<0UL, std::pair<MTLGPUDebugBuffer *, unsigned long>> { struct pair<MTLGPUDebugBuffer *, unsigned long> { id x0; unsigned long long x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, MTLIndirectCommandBufferExecutionRange> { char x0; struct __alt<1UL, MTLIndirectCommandBufferExecutionRange> { struct { unsigned int x0; unsigned int x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })a1;
- (unsigned long long *)_internalBindingTableForStage:(unsigned long long)a0;
- (void)bindInternalBufferForStage:(id)a0 index:(unsigned long long)a1 stage:(unsigned long long)a2;
- (void)bindInternalBufferForStage:(id)a0 index:(unsigned long long)a1 stage:(unsigned long long)a2 offset:(unsigned long long)a3;
- (void)bindInternalValueForStage:(unsigned long long)a0 index:(unsigned long long)a1 stage:(unsigned long long)a2;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 withRenderTargetArrayIndex:(unsigned int)a2;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 withRenderTargetArrayIndex:(unsigned int)a2 withCondition:(long long)a3;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4 instanceCount:(unsigned long long)a5;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(unsigned long long)a3 indexBufferLength:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexType:(unsigned long long)a1 indexBuffer:(unsigned long long)a2 indexBufferLength:(unsigned long long)a3 indirectBuffer:(unsigned long long)a4;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(unsigned long long)a1;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)endEncoding;
- (void)flushBindings;
- (id)initWithRenderCommandEncoder:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2 encoderID:(unsigned int)a3;
- (void)resetTileCondition;
- (void)restoreInternalState:(id)a0;
- (void)setArgumentTable:(id)a0 atStages:(unsigned long long)a1;
- (void)setBufferUsageTable:(id)a0 textureUsageTable:(id)a1 forStage:(unsigned long long)a2;
- (void)setDepthStencilState:(id)a0;
- (void)setInternalBytesForStage:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2 stage:(unsigned long long)a3;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineState:(id)a0;
- (void)setRenderPipelineStateBuffers:(id)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)temporaryBufferWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)temporaryBufferWithLength:(unsigned long long)a0;

@end
