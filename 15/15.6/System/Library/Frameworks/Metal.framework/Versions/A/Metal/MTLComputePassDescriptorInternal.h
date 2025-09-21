@class MTLComputePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    struct MTLComputePassDescriptorPrivate { unsigned long long dispatchType; MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; unsigned int substreamCount; char allowCommandEncoderCoalescing; } _private;
}

@property (nonatomic) unsigned int substreamCount;
@property (nonatomic) char allowCommandEncoderCoalescing;

+ (id)computePassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (const struct MTLComputePassDescriptorPrivate { unsigned long long x0; id x1; unsigned int x2; char x3; } *)_descriptorPrivate;
- (unsigned long long)dispatchType;
- (id)sampleBufferAttachments;
- (void)setDispatchType:(unsigned long long)a0;

@end
