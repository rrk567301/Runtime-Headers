@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)blitPassDescriptor;

- (const struct MTLBlitPassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)sampleBufferAttachments;
- (void)dealloc;

@end
