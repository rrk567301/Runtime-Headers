@interface MTL4AccelerationStructureTriangleGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } vertexBuffer;
@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long vertexStride;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } indexBuffer;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long triangleCount;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } transformationMatrixBuffer;
@property (nonatomic) long long transformationMatrixLayout;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

@end
