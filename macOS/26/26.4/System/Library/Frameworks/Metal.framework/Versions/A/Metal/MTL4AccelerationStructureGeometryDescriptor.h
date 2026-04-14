@class NSString;

@interface MTL4AccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
