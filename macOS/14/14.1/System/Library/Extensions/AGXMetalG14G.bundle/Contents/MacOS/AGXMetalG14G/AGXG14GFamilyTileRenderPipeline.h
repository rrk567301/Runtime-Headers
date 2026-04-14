@class AGXG14GFamilyTileProgram;

@interface AGXG14GFamilyTileRenderPipeline : AGXG14GFamilyRenderPipeline {
    AGXG14GFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
