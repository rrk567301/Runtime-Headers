@protocol MTLBuffer;

@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (nonatomic) unsigned long long vertexFormat;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long triangleCount;
@property (retain, nonatomic) id<MTLBuffer> transformationMatrixBuffer;
@property (nonatomic) unsigned long long transformationMatrixBufferOffset;
@property (nonatomic) long long transformationMatrixLayout;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (void)dealloc;

@end
