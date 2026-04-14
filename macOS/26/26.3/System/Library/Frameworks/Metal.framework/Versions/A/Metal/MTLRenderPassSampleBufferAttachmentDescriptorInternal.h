@protocol MTLCounterSampleBuffer;

@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {
    struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfVertexSampleIndex; unsigned long long endOfVertexSampleIndex; unsigned long long startOfFragmentSampleIndex; unsigned long long endOfFragmentSampleIndex; } _private;
}

- (const struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)_descriptorPrivate;
- (id)init;
- (id)sampleBuffer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)endOfFragmentSampleIndex;
- (unsigned long long)endOfVertexSampleIndex;
- (void)setSampleBuffer:(id)a0;
- (unsigned long long)startOfFragmentSampleIndex;
- (unsigned long long)startOfVertexSampleIndex;
- (void)setEndOfFragmentSampleIndex:(unsigned long long)a0;
- (void)setEndOfVertexSampleIndex:(unsigned long long)a0;
- (void)setStartOfFragmentSampleIndex:(unsigned long long)a0;
- (void)setStartOfVertexSampleIndex:(unsigned long long)a0;

@end
