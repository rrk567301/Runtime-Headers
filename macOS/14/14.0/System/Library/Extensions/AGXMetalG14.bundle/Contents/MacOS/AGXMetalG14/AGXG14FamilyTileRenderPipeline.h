@class AGXG14FamilyTileProgram;

@interface AGXG14FamilyTileRenderPipeline : AGXG14FamilyRenderPipeline {
    AGXG14FamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
