@class MTL4PipelineStageDynamicLinkingDescriptor;

@interface MTL4RenderPipelineDynamicLinkingDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *vertexLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *fragmentLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *tileLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *objectLinkingDescriptor;
@property (readonly, nonatomic) MTL4PipelineStageDynamicLinkingDescriptor *meshLinkingDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)dealloc;
- (void)releaseLinkingDescriptors;

@end
