@class MTL4FunctionDescriptor, MTL4StaticLinkingDescriptor, MTLTileRenderPipelineColorAttachmentDescriptorArray;

@interface MTL4TileRenderPipelineDescriptor : MTL4PipelineDescriptor

@property (copy, nonatomic) MTL4FunctionDescriptor *tileFunctionDescriptor;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) BOOL threadgroupSizeMatchesTileSize;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *staticLinkingDescriptor;
@property (nonatomic) BOOL supportBinaryLinking;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
