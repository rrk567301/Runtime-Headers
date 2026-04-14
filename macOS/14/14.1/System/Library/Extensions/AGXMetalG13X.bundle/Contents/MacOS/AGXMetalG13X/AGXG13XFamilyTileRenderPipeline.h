@class AGXG13XFamilyTileProgram;

@interface AGXG13XFamilyTileRenderPipeline : AGXG13XFamilyRenderPipeline {
    AGXG13XFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
