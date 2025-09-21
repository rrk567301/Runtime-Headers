@class MTLVertexAttributeDescriptorArray, MTLVertexBufferLayoutDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLVertexAttributeDescriptorArray *attributes;

+ (id)alloc;
+ (id)vertexDescriptor;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)reset;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
