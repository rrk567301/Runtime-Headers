@interface MTL4AccelerationStructureBoundingBoxGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
