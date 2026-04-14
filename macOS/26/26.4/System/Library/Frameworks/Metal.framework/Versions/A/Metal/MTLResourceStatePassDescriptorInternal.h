@class MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal;

@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; } _private;
}

+ (id)resourceStatePassDescriptor;

- (const struct MTLResourceStatePassDescriptorPrivate { id x0; } *)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)sampleBufferAttachments;
- (void)dealloc;

@end
