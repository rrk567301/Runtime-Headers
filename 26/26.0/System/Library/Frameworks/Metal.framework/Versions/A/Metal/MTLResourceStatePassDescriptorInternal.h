@class MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)resourceStatePassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)sampleBufferAttachments;
- (const struct MTLResourceStatePassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
