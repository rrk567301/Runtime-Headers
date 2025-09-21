@class NSString;
@protocol MTLBuffer;

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) char opaque;
@property (nonatomic) char allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLBuffer> primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
