@interface MTL4IndirectInstanceAccelerationStructureDescriptor : MTL4AccelerationStructureDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long maxInstanceCount;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } instanceCountBuffer;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } motionTransformBuffer;
@property (nonatomic) unsigned long long maxMotionTransformCount;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } motionTransformCountBuffer;
@property (nonatomic) long long instanceTransformationMatrixLayout;
@property (nonatomic) long long motionTransformType;
@property (nonatomic) unsigned long long motionTransformStride;

- (long long)type;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isInstanceDescriptor;

@end
