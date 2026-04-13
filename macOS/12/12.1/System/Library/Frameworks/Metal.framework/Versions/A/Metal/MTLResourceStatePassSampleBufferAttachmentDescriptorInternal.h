@protocol MTLCounterSampleBuffer;

@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor {
    struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate { id<MTLCounterSampleBuffer> sampleBuffer; unsigned long long startOfEncoderSampleIndex; unsigned long long endOfEncoderSampleIndex; } _private;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (const struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; } *)_descriptorPrivate;
- (id)sampleBuffer;
- (void)setSampleBuffer:(id)a0;
- (unsigned long long)startOfEncoderSampleIndex;
- (unsigned long long)endOfEncoderSampleIndex;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)a0;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)a0;

@end
