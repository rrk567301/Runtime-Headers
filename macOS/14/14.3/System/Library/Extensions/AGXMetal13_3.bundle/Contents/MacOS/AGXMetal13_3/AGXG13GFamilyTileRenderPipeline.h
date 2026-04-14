@class AGXG13GFamilyTileProgram;

@interface AGXG13GFamilyTileRenderPipeline : AGXG13GFamilyRenderPipeline {
    AGXG13GFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
