@interface MTL4InstanceAccelerationStructureDescriptor : MTL4AccelerationStructureDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformCount;
@property (nonatomic) long long instanceTransformationMatrixLayout;
@property (nonatomic) long long motionTransformType;
@property (nonatomic) unsigned long long motionTransformStride;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;
- (BOOL)isInstanceDescriptor;

@end
