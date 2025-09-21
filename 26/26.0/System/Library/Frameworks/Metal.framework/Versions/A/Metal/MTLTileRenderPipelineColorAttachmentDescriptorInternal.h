@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned int pixelFormat; } ; struct { unsigned int bits; } ; } ; } _private;
}

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)pixelFormat;

@end
