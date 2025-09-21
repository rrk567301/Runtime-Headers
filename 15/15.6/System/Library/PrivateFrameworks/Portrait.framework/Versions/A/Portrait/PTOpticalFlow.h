@class PTMetalContext, LKTFlowGPU;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTOpticalFlow : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _warpTexture;
    LKTFlowGPU *_lktflowgpuContext;
    id<MTLTexture> _displacementFWD;
    int _colorWidth;
    int _colorHeight;
    char _allocateDisplacementFWD;
    char _inverseFlow;
}

- (void).cxx_destruct;
- (void)reset;
- (id)toTextureArray:(id)a0;
- (id)displacementFWD;
- (short)estimateDisplacementFWD:(id)a0 sourceRGBA:(id)a1 destRGBA:(id)a2;
- (short)estimateDisplacementStream:(id)a0 destRGBA:(id)a1 outDisplacement:(id)a2;
- (short)estimateDisplacementStream:(id)a0 index:(int)a1 doOpticalFlow:(char)a2 destRGBA:(id)a3;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 lktPreset:(long long)a2;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 lktPreset:(long long)a2 allocateDisplacementFWD:(char)a3 needConversionBGRA2YUVA:(char)a4 inverseFlow:(char)a5;
- (short)setDisplacementFWD:(id)a0;
- (short)warp:(id)a0 inTexture:(id)a1 inDisplacement:(id)a2 outTextureWarped:(id)a3;

@end
