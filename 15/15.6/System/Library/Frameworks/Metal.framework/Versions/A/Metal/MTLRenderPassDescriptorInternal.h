@class NSArray, MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; char fineGrainedBackgroundVisibilityEnabled; char skipEmptyTilesOnClearEnabled; char ditherEnabled; char openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[8]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; char pointCoordYFlipEnabled; NSArray *binaryArchives; } _private;
}

+ (id)renderPassDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)depthAttachment;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char x5; char x6; char x7; char x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; union { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; unsigned long long x14; struct { float x0; float x1; } x15[8]; unsigned long long x16; id x17; id x18; char x19; id x20; } *)_descriptorPrivate;
- (id)binaryArchives;
- (id)colorAttachments;
- (unsigned long long)defaultColorSampleCount;
- (unsigned long long)defaultRasterSampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)imageblockSampleLength;
- (char)openGLModeEnabled;
- (id)rasterizationRateMap;
- (unsigned long long)renderTargetArrayLength;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)renderTargetWidth;
- (id)sampleBufferAttachments;
- (void)setBinaryArchives:(id)a0;
- (void)setRasterizationRateMap:(id)a0;
- (void)setVisibilityResultBuffer:(id)a0;
- (id)stencilAttachment;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;
- (char)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (id)visibilityResultBuffer;
- (void)setFineGrainedBackgroundVisibilityEnabled:(char)a0;
- (void)setRenderTargetHeight:(unsigned long long)a0;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (char)ditherEnabled;
- (char)fineGrainedBackgroundVisibilityEnabled;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (char)pointCoordYFlipEnabled;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;
- (void)setDepthAttachment:(id)a0;
- (void)setDitherEnabled:(char)a0;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (void)setOpenGLModeEnabled:(char)a0;
- (void)setPointCoordYFlipEnabled:(char)a0;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (void)setSkipEmptyTilesOnClearEnabled:(char)a0;
- (void)setStencilAttachment:(id)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (void)setTileHeight:(unsigned long long)a0;
- (void)setTileWidth:(unsigned long long)a0;
- (char)skipEmptyTilesOnClearEnabled;

@end
