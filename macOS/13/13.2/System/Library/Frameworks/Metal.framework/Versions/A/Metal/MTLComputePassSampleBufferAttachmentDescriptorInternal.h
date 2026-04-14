@protocol MTLCounterSampleBuffer;

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSampleBuffer:(id)a0;
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (id)sampleBuffer;
- (unsigned long long)endOfEncoderSampleIndex;
- (unsigned long long)startOfEncoderSampleIndex;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;

@end
