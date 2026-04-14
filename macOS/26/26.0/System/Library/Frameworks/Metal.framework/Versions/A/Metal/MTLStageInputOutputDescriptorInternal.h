@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
}

+ (id)vertexDescriptor;

- (id)layouts;
- (unsigned long long)indexType;
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
- (void)setIndexType:(unsigned long long)a0;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:(unsigned long long)a0;

@end
