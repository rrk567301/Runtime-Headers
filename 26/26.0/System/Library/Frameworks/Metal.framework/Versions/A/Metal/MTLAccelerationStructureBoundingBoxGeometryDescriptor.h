@protocol MTLBuffer;

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

+ (id)descriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
