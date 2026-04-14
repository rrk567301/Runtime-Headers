@interface MTL4AccelerationStructureMotionBoundingBoxGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

- (long long)type;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
