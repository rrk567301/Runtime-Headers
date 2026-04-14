@class MTL4StaticLinkingDescriptor, MTL4FunctionDescriptor, MTL4RenderPipelineColorAttachmentDescriptorArray, MTLVertexDescriptor;

@interface MTL4RenderPipelineDescriptor : MTL4PipelineDescriptor

@property (nonatomic) unsigned long long colorSampleCount;
@property (copy, nonatomic) MTL4FunctionDescriptor *vertexFunctionDescriptor;
@property (copy, nonatomic) MTL4FunctionDescriptor *fragmentFunctionDescriptor;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (nonatomic) long long alphaToCoverageState;
@property (nonatomic) long long alphaToOneState;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled;
@property (nonatomic) unsigned long long maxVertexAmplificationCount;
@property (readonly) MTL4RenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long inputPrimitiveTopology;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *vertexStaticLinkingDescriptor;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *fragmentStaticLinkingDescriptor;
@property (nonatomic) BOOL supportVertexBinaryLinking;
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
