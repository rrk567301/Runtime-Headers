@interface MTL4AccelerationStructureTriangleGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } vertexBuffer;
@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long vertexStride;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } indexBuffer;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long triangleCount;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } transformationMatrixBuffer;
@property (nonatomic) long long transformationMatrixLayout;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
