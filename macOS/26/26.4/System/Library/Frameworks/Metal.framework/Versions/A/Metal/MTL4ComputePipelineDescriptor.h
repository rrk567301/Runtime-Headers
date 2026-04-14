@class MTL4FunctionDescriptor, MTL4StaticLinkingDescriptor;

@interface MTL4ComputePipelineDescriptor : MTL4PipelineDescriptor

@property (copy, nonatomic) MTL4FunctionDescriptor *computeFunctionDescriptor;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup;
@property (nonatomic) BOOL supportBinaryLinking;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *staticLinkingDescriptor;
@property (nonatomic) long long supportIndirectCommandBuffers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)dealloc;
- (id)_staticLinkingDescriptorNoAlloc;

@end
