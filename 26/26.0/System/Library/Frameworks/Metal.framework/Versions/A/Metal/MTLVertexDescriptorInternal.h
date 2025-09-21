@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;

- (id)layouts;
- (void)reset;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newSerializedDescriptor;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (id)init;
- (id)description;
- (id)attributes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
