@class MTL4FunctionDescriptor, MTL4StaticLinkingDescriptor, MTL4RenderPipelineColorAttachmentDescriptorArray;

@interface MTL4MeshRenderPipelineDescriptor : MTL4PipelineDescriptor

@property (nonatomic) unsigned long long colorSampleCount;
@property (copy, nonatomic) MTL4FunctionDescriptor *objectFunctionDescriptor;
@property (copy, nonatomic) MTL4FunctionDescriptor *meshFunctionDescriptor;
@property (copy, nonatomic) MTL4FunctionDescriptor *fragmentFunctionDescriptor;
@property (nonatomic) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property (nonatomic) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerObjectThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerMeshThreadgroup;
@property (nonatomic) BOOL objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) BOOL meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long payloadMemoryLength;
@property (nonatomic) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (nonatomic) long long alphaToCoverageState;
@property (nonatomic) long long alphaToOneState;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled;
@property (nonatomic) unsigned long long maxVertexAmplificationCount;
@property (readonly) MTL4RenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *objectStaticLinkingDescriptor;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *meshStaticLinkingDescriptor;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *fragmentStaticLinkingDescriptor;
@property (nonatomic) BOOL supportObjectBinaryLinking;
@property (nonatomic) BOOL supportMeshBinaryLinking;
@property (nonatomic) BOOL supportFragmentBinaryLinking;
@property (nonatomic) long long colorAttachmentMappingState;
@property (nonatomic) long long supportIndirectCommandBuffers;

- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
