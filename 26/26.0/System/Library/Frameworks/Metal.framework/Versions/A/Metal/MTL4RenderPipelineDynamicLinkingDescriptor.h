@class MTL4PipelineStageDynamicLinkingDescriptor;

@interface MTL4RenderPipelineDynamicLinkingDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *vertexLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *fragmentLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *tileLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *objectLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *meshLinkingDescriptor;

- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)releaseLinkingDescriptors;

@end
