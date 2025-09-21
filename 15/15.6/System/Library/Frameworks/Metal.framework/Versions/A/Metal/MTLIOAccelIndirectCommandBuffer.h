@class MTLIndirectCommandBufferDescriptor, MTLIOAccelBuffer;
@protocol MTLIndirectRenderCommandEncoder, MTLIndirectComputeCommandEncoder;

@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource {
    MTLIOAccelBuffer *_privateICBuffer;
    unsigned long long _maxCommandCount;
    unsigned long long _commandBufferType;
    id<MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
    id<MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    struct MTLIndirectCommandBufferHeader { unsigned long long headerSize; unsigned int commandTypes; char inheritPipelineState; char inheritBuffers; unsigned char maxVertexBufferBindCount; unsigned char maxFragmentBufferBindCount; unsigned char maxKernelBufferBindCount; unsigned char maxObjectBufferBindCount; unsigned char maxMeshBufferBindCount; char supportRayTracing; char supportDynamicAttributeStride; unsigned char maxKernelThreadgroupMemoryBindCount; unsigned char maxObjectThreadgroupMemoryBindCount; unsigned long long size; } _internalHeader;
}

@property (readonly) MTLIOAccelBuffer *privateICBuffer;
@property (readonly) unsigned long long commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (char)isWriteComplete;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (char)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (char)doesAliasResource:(id)a0;
- (void)getHeader:(void **)a0 headerSize:(unsigned long long *)a1;
- (unsigned long long)gpuHandle;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (char)isAliasable;
- (char)isComplete;
- (void)makeAliasable;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)waitUntilComplete;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2;

@end
