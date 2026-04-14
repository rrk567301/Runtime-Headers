@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; } _private;
    struct FlatBufferBuilder { struct vector_downward { struct Allocator *allocator_; BOOL own_allocator_; unsigned long long initial_size_; unsigned long long buffer_minalign_; unsigned long long reserved_; char *buf_; char *cur_; char *scratch_; } buf_; unsigned int num_field_loc; unsigned short max_voffset_; BOOL nested; BOOL finished; unsigned long long minalign_; BOOL force_defaults_; BOOL dedup_vtables_; void *string_pool; } _builder;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)supportAddingBinaryFunctions;
- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; } *)_descriptorPrivate;
- (id)colorAttachments;
- (unsigned long long)colorSampleCount;
- (id)preloadedLibraries;
- (id)linkedFunctions;
- (unsigned long long)rasterSampleCount;
- (void)setPreloadedLibraries:(id)a0;
- (void)setTileFunction:(id)a0;
- (void)setLinkedFunctions:(id)a0;
- (id)binaryArchives;
- (id)tileFunction;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setBinaryArchives:(id)a0;
- (id)label;
- (void)setLabel:(id)a0;
- (unsigned long long)sampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (long long)textureWriteRoundingMode;
- (void)reset;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (BOOL)threadgroupSizeMatchesTileSize;
- (unsigned long long)maxCallStackDepth;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setColorSampleCount:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (id)profileControl;
- (void)setProfileControl:(id)a0;
- (const void *)getPipelineScript;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (id)tileBuffers;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)insertLibraries;
- (void)setInsertLibraries:(id)a0;
- (void)validateWithDevice:(id)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
