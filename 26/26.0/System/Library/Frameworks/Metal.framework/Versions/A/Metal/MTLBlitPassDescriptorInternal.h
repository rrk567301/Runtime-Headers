@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)blitPassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)sampleBufferAttachments;
- (const struct MTLBlitPassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
