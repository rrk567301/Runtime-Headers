@class AGXG14XFamilyTileProgram;

@interface AGXG14XFamilyTileRenderPipeline : AGXG14XFamilyRenderPipeline {
    AGXG14XFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
