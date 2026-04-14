@class NSString;
@protocol MTLBuffer;

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLBuffer> primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (void)dealloc;

@end
