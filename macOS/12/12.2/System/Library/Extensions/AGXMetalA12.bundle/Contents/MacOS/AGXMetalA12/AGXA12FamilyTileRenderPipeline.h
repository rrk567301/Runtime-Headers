@class AGXA12FamilyTileProgram;

@interface AGXA12FamilyTileRenderPipeline : AGXA12FamilyRenderPipeline {
    AGXA12FamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
