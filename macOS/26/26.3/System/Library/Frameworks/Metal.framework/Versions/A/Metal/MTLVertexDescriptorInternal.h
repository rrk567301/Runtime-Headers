@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;

- (id)layouts;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (id)description;
- (id)attributes;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)newSerializedDescriptor;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
