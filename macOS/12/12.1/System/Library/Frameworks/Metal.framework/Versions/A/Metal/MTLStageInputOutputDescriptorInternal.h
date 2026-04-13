@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
}

+ (id)vertexDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)indexType;
- (id)layouts;
- (id)attributes;
- (void)setIndexType:(unsigned long long)a0;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:(unsigned long long)a0;
- (id)newSerializedDescriptor;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;

@end
