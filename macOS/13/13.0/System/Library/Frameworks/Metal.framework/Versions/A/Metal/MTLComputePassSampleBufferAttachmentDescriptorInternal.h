@protocol MTLCounterSampleBuffer;

@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor {
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sampleBuffer;
- (unsigned long long)startOfEncoderSampleIndex;
- (unsigned long long)endOfEncoderSampleIndex;
- (void)setSampleBuffer:(id)a0;
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;

@end
