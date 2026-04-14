@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
}

+ (id)vertexDescriptor;

- (id)layouts;
- (BOOL)validateWithVertexFunction:(id)a0 error:(id *)a1 renderPipelineDescriptor:(id)a2;
- (void)setIndexType:(unsigned long long)a0;
- (id)description;
- (id)attributes;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)newSerializedDescriptor;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:(unsigned long long)a0;

@end
