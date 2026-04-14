@class AGXG15GFamilyTileProgram;

@interface AGXG15GFamilyTileRenderPipeline : AGXG15GFamilyRenderPipeline {
    AGXG15GFamilyTileProgram *_tp;
}

- (void)dealloc;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)initWithDeviceAndTileDesc:(id)a0 tilePipelineStateDescriptor:(id)a1;
- (id)newTileShaderDebugInfo;

@end
