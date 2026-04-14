@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {
    struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char blendingEnabled : 2; unsigned char rgbBlendOperation : 3; unsigned char alphaBlendOperation : 3; unsigned char sourceRGBBlendFactor : 5; unsigned char sourceAlphaBlendFactor : 5; unsigned char destinationRGBBlendFactor : 5; unsigned char destinationAlphaBlendFactor : 5; unsigned char writeMask : 5; unsigned char logicOpEnabled : 1; unsigned char logicOp : 4; unsigned int pixelFormat : 22; } ; struct { unsigned long long bits; } ; } ; } _private;
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate { union { struct { unsigned char x0 : 2; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 5; unsigned char x4 : 5; unsigned char x5 : 5; unsigned char x6 : 5; unsigned char x7 : 5; unsigned char x8 : 1; unsigned char x9 : 4; unsigned int x10 : 22; } x0; struct { unsigned long long x0; } x1; } x0; } *)_descriptorPrivate;
- (void)setBlendingEnabled:(BOOL)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (unsigned long long)destinationRGBBlendFactor;
- (unsigned long long)writeMask;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlphaBlendOperation:(unsigned long long)a0;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)a0;
- (void)reset;
- (void)setDestinationRGBBlendFactor:(unsigned long long)a0;
- (unsigned long long)sourceAlphaBlendFactor;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)destinationAlphaBlendFactor;
- (id)description;
- (unsigned long long)alphaBlendOperation;
- (void)setSourceRGBBlendFactor:(unsigned long long)a0;
- (unsigned long long)sourceRGBBlendFactor;
- (unsigned long long)pixelFormat;
- (void)setSourceAlphaBlendFactor:(unsigned long long)a0;
- (void)setRgbBlendOperation:(unsigned long long)a0;
- (BOOL)isBlendingEnabled;
- (id)init;
- (unsigned long long)rgbBlendOperation;
- (void)setWriteMask:(unsigned long long)a0;
- (void)setBlendingStateSPI:(long long)a0;
- (void)dealloc;
- (long long)blendingStateSPI;

@end
