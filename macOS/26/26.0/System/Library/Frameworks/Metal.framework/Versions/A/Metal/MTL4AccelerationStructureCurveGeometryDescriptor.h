@interface MTL4AccelerationStructureCurveGeometryDescriptor : MTL4AccelerationStructureGeometryDescriptor

@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } controlPointBuffer;
@property (nonatomic) unsigned long long controlPointCount;
@property (nonatomic) unsigned long long controlPointStride;
@property (nonatomic) unsigned long long controlPointFormat;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } radiusBuffer;
@property (nonatomic) unsigned long long radiusFormat;
@property (nonatomic) unsigned long long radiusStride;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } indexBuffer;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long segmentCount;
@property (nonatomic) unsigned long long segmentControlPointCount;
@property (nonatomic) long long curveType;
@property (nonatomic) long long curveBasis;
@property (nonatomic) long long curveEndCaps;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
