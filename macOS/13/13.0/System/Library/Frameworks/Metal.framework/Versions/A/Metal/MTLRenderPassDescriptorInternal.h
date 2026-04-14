@class MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL skipEmptyTilesOnClearEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[8]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; } _private;
}

+ (id)renderPassDescriptor;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sampleBufferAttachments;
- (id)rasterizationRateMap;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (unsigned long long)threadgroupMemoryLength;
- (BOOL)openGLModeEnabled;
- (id)stencilAttachment;
- (void)setRasterizationRateMap:(id)a0;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)renderTargetWidth;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; union { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; unsigned long long x14; struct { float x0; float x1; } x15[8]; unsigned long long x16; id x17; id x18; BOOL x19; } *)_descriptorPrivate;
- (id)colorAttachments;
- (unsigned long long)defaultColorSampleCount;
- (void)setVisibilityResultBuffer:(id)a0;
- (unsigned long long)defaultRasterSampleCount;
- (id)depthAttachment;
- (id)visibilityResultBuffer;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)tileWidth;
- (unsigned long long)tileHeight;
- (unsigned long long)imageblockSampleLength;
- (unsigned long long)renderTargetArrayLength;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (void)setRenderTargetHeight:(unsigned long long)a0;
- (void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)a0;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (void)setTileWidth:(unsigned long long)a0;
- (void)setTileHeight:(unsigned long long)a0;
- (void)setDepthAttachment:(id)a0;
- (void)setStencilAttachment:(id)a0;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (BOOL)fineGrainedBackgroundVisibilityEnabled;
- (void)setSkipEmptyTilesOnClearEnabled:(BOOL)a0;
- (BOOL)skipEmptyTilesOnClearEnabled;
- (void)setDitherEnabled:(BOOL)a0;
- (BOOL)isDitherEnabled;
- (void)setPointCoordYFlipEnabled:(BOOL)a0;
- (BOOL)pointCoordYFlipEnabled;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;

@end
