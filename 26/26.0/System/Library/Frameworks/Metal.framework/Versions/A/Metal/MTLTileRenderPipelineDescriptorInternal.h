@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; NSDictionary *gpuCompilerSPIOptions; long long shaderValidation; long long shaderValidationState; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup; NSString *name; } _private;
}

- (long long)textureWriteRoundingMode;
- (id)gpuCompilerSPIOptions;
- (id)profileControl;
- (void)setProfileControl:(id)a0;
- (id)binaryArchives;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (id)insertLibraries;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)reset;
- (BOOL)threadgroupSizeMatchesTileSize;
- (void)dealloc;
- (id)colorAttachments;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportAddingBinaryFunctions;
- (unsigned long long)colorSampleCount;
- (long long)shaderValidation;
- (void)setName:(id)a0;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (id)init;
- (id)label;
- (void)setInsertLibraries:(id)a0;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (void)setColorSampleCount:(unsigned long long)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setRequiredThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })requiredThreadsPerThreadgroup;
- (id)description;
- (void)setPreloadedLibraries:(id)a0;
- (unsigned long long)sampleCount;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (id)linkedFunctions;
- (id)name;
- (long long)shaderValidationState;
- (void)setLinkedFunctions:(id)a0;
- (id)preloadedLibraries;
- (unsigned long long)maxCallStackDepth;
- (void)setShaderValidationState:(long long)a0;
- (void)setShaderValidation:(long long)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (unsigned long long)rasterSampleCount;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setLabel:(id)a0;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; unsigned long long x17; id x18; long long x19; long long x20; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x21; id x22; } *)_descriptorPrivate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)newPipelineScript;
- (void)validateWithDevice:(id)a0;
- (void)setBinaryArchives:(id)a0;
- (void)setTileFunction:(id)a0;
- (id)tileFunction;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)tileBuffers;

@end
