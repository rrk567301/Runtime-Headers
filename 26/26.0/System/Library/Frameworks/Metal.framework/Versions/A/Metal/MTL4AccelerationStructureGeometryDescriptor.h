@class NSString;

@interface MTL4AccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) struct MTL4BufferRange { unsigned long long bufferAddress; unsigned long long length; } primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataStride;
@property (nonatomic) unsigned long long primitiveDataElementSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
