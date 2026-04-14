@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {
    struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char blendingEnabled : 2; unsigned char rgbBlendOperation : 3; unsigned char alphaBlendOperation : 3; unsigned char sourceRGBBlendFactor : 5; unsigned char sourceAlphaBlendFactor : 5; unsigned char destinationRGBBlendFactor : 5; unsigned char destinationAlphaBlendFactor : 5; unsigned char writeMask : 5; unsigned char logicOpEnabled : 1; unsigned char logicOp : 4; unsigned int pixelFormat : 22; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char x0 : 2; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 5; unsigned char x4 : 5; unsigned char x5 : 5; unsigned char x6 : 5; unsigned char x7 : 5; unsigned char x8 : 1; unsigned char x9 : 4; unsigned int x10 : 22; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (void)setWriteMask:(unsigned long long)a0;
- (unsigned long long)destinationAlphaBlendFactor;
- (unsigned long long)sourceAlphaBlendFactor;
- (unsigned long long)alphaBlendOperation;
- (long long)blendingStateSPI;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setAlphaBlendOperation:(unsigned long long)a0;
- (unsigned long long)destinationRGBBlendFactor;
- (unsigned long long)pixelFormat;
- (void)setRgbBlendOperation:(unsigned long long)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (unsigned long long)rgbBlendOperation;
- (void)setBlendingStateSPI:(long long)a0;
- (id)description;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)a0;
- (unsigned long long)sourceRGBBlendFactor;
- (void)dealloc;
- (void)setBlendingEnabled:(BOOL)a0;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSourceRGBBlendFactor:(unsigned long long)a0;
- (unsigned long long)writeMask;
- (void)setSourceAlphaBlendFactor:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDestinationRGBBlendFactor:(unsigned long long)a0;
- (BOOL)isBlendingEnabled;
- (id)init;

@end
