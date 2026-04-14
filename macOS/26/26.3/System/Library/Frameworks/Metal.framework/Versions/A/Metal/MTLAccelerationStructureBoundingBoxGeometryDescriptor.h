@protocol MTLBuffer;

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

+ (id)descriptor;

- (long long)type;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
