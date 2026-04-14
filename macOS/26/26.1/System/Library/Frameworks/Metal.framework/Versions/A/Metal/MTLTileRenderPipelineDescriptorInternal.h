@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; NSDictionary *gpuCompilerSPIOptions; long long shaderValidation; long long shaderValidationState; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup; NSString *name; } _private;
}

- (long long)textureWriteRoundingMode;
- (long long)shaderValidation;
- (void)setShaderValidation:(long long)a0;
- (id)gpuCompilerSPIOptions;
- (void)setProfileControl:(id)a0;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; unsigned long long x17; id x18; long long x19; long long x20; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x21; id x22; } *)_descriptorPrivate;
- (id)profileControl;
- (void)setBinaryArchives:(id)a0;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (void)setInsertLibraries:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })requiredThreadsPerThreadgroup;
- (id)binaryArchives;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)preloadedLibraries;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (id)linkedFunctions;
- (unsigned long long)colorSampleCount;
- (void)setLabel:(id)a0;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (BOOL)supportAddingBinaryFunctions;
- (id)insertLibraries;
- (void)setName:(id)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)description;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (unsigned long long)sampleCount;
- (id)colorAttachments;
- (unsigned long long)maxCallStackDepth;
- (void)dealloc;
- (void)reset;
- (void)validateWithDevice:(id)a0;
- (id)newPipelineScript;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (long long)shaderValidationState;
- (void)setPreloadedLibraries:(id)a0;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setShaderValidationState:(long long)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (BOOL)threadgroupSizeMatchesTileSize;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLinkedFunctions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (unsigned long long)rasterSampleCount;
- (void)setRequiredThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)label;
- (id)init;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (void)setTileFunction:(id)a0;
- (id)tileFunction;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)tileBuffers;

@end
