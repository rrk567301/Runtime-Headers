@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassStencilAttachmentDescriptor, MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTL4RenderPassDescriptor : NSObject <NSCopying> {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL skipEmptyTilesOnClearEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[8]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; long long visibilityResultType; BOOL supportColorAttachmentMapping; } _private;
}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (nonatomic) unsigned long long renderTargetArrayLength;
@property (nonatomic) unsigned long long imageblockSampleLength;
@property (nonatomic) unsigned long long threadgroupMemoryLength;
@property (nonatomic) unsigned long long tileWidth;
@property (nonatomic) unsigned long long tileHeight;
@property (nonatomic) unsigned long long defaultRasterSampleCount;
@property (nonatomic) unsigned long long renderTargetWidth;
@property (nonatomic) unsigned long long renderTargetHeight;
@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;
@property (retain, nonatomic) id<MTLBuffer> visibilityResultBuffer;
@property (nonatomic) long long visibilityResultType;
@property (nonatomic) BOOL supportColorAttachmentMapping;

- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (unsigned long long)defaultColorSampleCount;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; union { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; unsigned long long x14; struct { float x0; float x1; } x15[8]; unsigned long long x16; id x17; id x18; BOOL x19; long long x20; BOOL x21; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
