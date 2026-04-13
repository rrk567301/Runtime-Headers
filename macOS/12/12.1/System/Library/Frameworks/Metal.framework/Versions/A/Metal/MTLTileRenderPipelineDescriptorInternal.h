@class NSString, NSDictionary, NSArray, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions, MTLPipelineBufferDescriptorArrayInternal;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; } _private;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)label;
- (void)setLabel:(id)a0;
- (unsigned long long)sampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; } *)_descriptorPrivate;
- (id)colorAttachments;
- (long long)textureWriteRoundingMode;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)reset;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (void)setPreloadedLibraries:(id)a0;
- (id)preloadedLibraries;
- (id)linkedFunctions;
- (id)tileFunction;
- (void)setSampleCount:(unsigned long long)a0;
- (id)binaryArchives;
- (void)setBinaryArchives:(id)a0;
- (void)setLinkedFunctions:(id)a0;
- (void)setTileFunction:(id)a0;
- (BOOL)threadgroupSizeMatchesTileSize;
- (BOOL)supportAddingBinaryFunctions;
- (unsigned long long)rasterSampleCount;
- (unsigned long long)colorSampleCount;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (unsigned long long)maxCallStackDepth;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (id)tileBuffers;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)insertLibraries;
- (void)setInsertLibraries:(id)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)validateWithDevice:(id)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
