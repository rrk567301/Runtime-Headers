@class MTLComputePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    struct MTLComputePassDescriptorPrivate { unsigned long long dispatchType; MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; unsigned int substreamCount; BOOL allowCommandEncoderCoalescing; BOOL usedForRaytracingEmulation; } _private;
}

@property (nonatomic) unsigned int substreamCount;
@property (nonatomic) BOOL allowCommandEncoderCoalescing;
@property (nonatomic) BOOL usedForRaytracingEmulation;

+ (id)computePassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)sampleBufferAttachments;
- (const struct MTLComputePassDescriptorPrivate { unsigned long long x0; id x1; unsigned int x2; BOOL x3; BOOL x4; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dispatchType;
- (void)setDispatchType:(unsigned long long)a0;

@end
