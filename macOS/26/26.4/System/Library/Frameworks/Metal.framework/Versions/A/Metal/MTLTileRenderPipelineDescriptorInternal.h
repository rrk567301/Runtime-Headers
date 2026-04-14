@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; NSDictionary *gpuCompilerSPIOptions; long long shaderValidation; long long shaderValidationState; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup; NSString *name; } _private;
}

- (void)setPluginData:(id)a0;
- (void)setProfileControl:(id)a0;
- (unsigned long long)sampleCount;
- (id)binaryArchives;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; unsigned long long x17; id x18; long long x19; long long x20; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x21; id x22; } *)_descriptorPrivate;
- (id)gpuCompilerSPIOptions;
- (long long)textureWriteRoundingMode;
- (long long)shaderValidation;
- (id)pluginData;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (void)validateWithDevice:(id)a0;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (void)setInsertLibraries:(id)a0;
- (void)setLinkedFunctions:(id)a0;
- (void)setLabel:(id)a0;
- (id)name;
- (unsigned long long)maxCallStackDepth;
- (id)formattedDescription:(unsigned long long)a0;
- (id)colorAttachments;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })requiredThreadsPerThreadgroup;
- (void)setName:(id)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)profileControl;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (void)setPreloadedLibraries:(id)a0;
- (void)setColorSampleCount:(unsigned long long)a0;
- (unsigned long long)hash;
- (unsigned long long)rasterSampleCount;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (id)newPipelineScript;
- (id)insertLibraries;
- (void)reset;
- (id)init;
- (id)linkedFunctions;
- (unsigned long long)colorSampleCount;
- (id)description;
- (void)setBinaryArchives:(id)a0;
- (void)setShaderValidationState:(long long)a0;
- (BOOL)threadgroupSizeMatchesTileSize;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (BOOL)supportAddingBinaryFunctions;
- (void)setRequiredThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)dealloc;
- (id)preloadedLibraries;
- (long long)shaderValidationState;
- (void)setShaderValidation:(long long)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setTileFunction:(id)a0;
- (id)tileFunction;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)tileBuffers;

@end
