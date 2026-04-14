@class AGXG15XFamilyTileProgram;

@interface AGXG15XFamilyTileRenderPipeline : AGXG15XFamilyRenderPipeline {
    AGXG15XFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
