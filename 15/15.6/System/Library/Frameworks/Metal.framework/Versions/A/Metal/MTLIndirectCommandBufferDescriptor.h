@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {
    struct MTLIndirectCommandBufferDescriptorState { unsigned long long commandTypes; char inheritPipelineState; char inheritBuffers; unsigned long long maxVertexBufferBindCount; unsigned long long maxFragmentBufferBindCount; unsigned long long maxKernelBufferBindCount; unsigned long long maxKernelThreadgroupMemoryBindCount; unsigned long long maxObjectBufferBindCount; unsigned long long maxMeshBufferBindCount; unsigned long long maxObjectThreadgroupMemoryBindCount; char supportRayTracing; char supportDynamicAttributeStride; unsigned long long resourceIndex; } _state;
}

@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) char inheritPipelineState;
@property (nonatomic) char inheritBuffers;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;
@property (nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount;
@property (nonatomic) unsigned long long maxObjectBufferBindCount;
@property (nonatomic) unsigned long long maxMeshBufferBindCount;
@property (nonatomic) unsigned long long maxObjectThreadgroupMemoryBindCount;
@property (nonatomic) char supportRayTracing;
@property (nonatomic) char supportDynamicAttributeStride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
