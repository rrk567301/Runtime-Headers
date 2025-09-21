@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {
    struct MTLIndirectCommandBufferDescriptorState { unsigned long long commandTypes; BOOL inheritPipelineState; BOOL inheritBuffers; unsigned long long maxVertexBufferBindCount; unsigned long long maxFragmentBufferBindCount; unsigned long long maxKernelBufferBindCount; unsigned long long maxKernelThreadgroupMemoryBindCount; unsigned long long maxObjectBufferBindCount; unsigned long long maxMeshBufferBindCount; unsigned long long maxObjectThreadgroupMemoryBindCount; BOOL supportRayTracing; BOOL supportDynamicAttributeStride; unsigned char maxScissorRectCount; unsigned char maxViewportCount; BOOL inheritDepthStencilState; BOOL inheritDepthBias; BOOL inheritStencilReferenceValues; BOOL inheritDepthClipMode; BOOL inheritCullMode; BOOL inheritFrontFacingWinding; BOOL inheritTriangleFillMode; BOOL inheritDepthTestBounds; BOOL inheritScissorRects; BOOL inheritViewports; BOOL inheritBlendColor; long long allowOverrideRenderStates; unsigned long long resourceIndex; unsigned int maxToolsDispatchBindings; BOOL supportColorAttachmentMapping; } _state;
}

@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long maxScissorRectCount;
@property (nonatomic) unsigned long long maxViewportCount;
@property (nonatomic) BOOL inheritStencilReferenceValues;
@property (nonatomic) BOOL inheritDepthTestBounds;
@property (nonatomic) BOOL inheritScissorRects;
@property (nonatomic) BOOL inheritViewports;
@property (nonatomic) BOOL inheritBlendColor;
@property (nonatomic) long long allowOverrideRenderStates;
@property (nonatomic) unsigned long long maxToolsDispatchBindings;
@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) BOOL inheritPipelineState;
@property (nonatomic) BOOL inheritBuffers;
@property (nonatomic) BOOL inheritDepthStencilState;
@property (nonatomic) BOOL inheritDepthBias;
@property (nonatomic) BOOL inheritDepthClipMode;
@property (nonatomic) BOOL inheritCullMode;
@property (nonatomic) BOOL inheritFrontFacingWinding;
@property (nonatomic) BOOL inheritTriangleFillMode;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;
@property (nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount;
@property (nonatomic) unsigned long long maxObjectBufferBindCount;
@property (nonatomic) unsigned long long maxMeshBufferBindCount;
@property (nonatomic) unsigned long long maxObjectThreadgroupMemoryBindCount;
@property (nonatomic) BOOL supportRayTracing;
@property (nonatomic) BOOL supportDynamicAttributeStride;
@property (nonatomic) BOOL supportColorAttachmentMapping;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
