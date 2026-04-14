@interface MTL4AccelerationStructureBoundingBoxGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
