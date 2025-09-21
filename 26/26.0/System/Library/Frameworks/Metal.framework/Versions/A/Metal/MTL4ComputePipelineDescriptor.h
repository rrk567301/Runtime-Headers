@class MTL4FunctionDescriptor, MTL4StaticLinkingDescriptor;

@interface MTL4ComputePipelineDescriptor : MTL4PipelineDescriptor

@property (copy, nonatomic) MTL4FunctionDescriptor *computeFunctionDescriptor;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup;
@property (nonatomic) BOOL supportBinaryLinking;
@property (copy, nonatomic) MTL4StaticLinkingDescriptor *staticLinkingDescriptor;
@property (nonatomic) long long supportIndirectCommandBuffers;

- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
