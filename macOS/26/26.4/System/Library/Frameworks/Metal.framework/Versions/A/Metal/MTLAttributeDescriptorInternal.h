@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setFormat:(unsigned long long)a0;
- (unsigned long long)format;
- (unsigned long long)bufferIndex;
- (void)setOffset:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBufferIndex:(unsigned long long)a0;
- (unsigned long long)offset;

@end
