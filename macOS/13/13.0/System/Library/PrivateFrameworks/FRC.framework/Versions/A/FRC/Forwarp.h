@protocol MTLComputePipelineState;

@interface Forwarp : FRCMetalBase {
    id<MTLComputePipelineState> _updateBest;
    id<MTLComputePipelineState> _updateOutputFullWarp;
    id<MTLComputePipelineState> _updateOutputLiteWarp;
    id<MTLComputePipelineState> _convert2Texture;
    id<MTLComputePipelineState> _initializeBest;
    id<MTLComputePipelineState> _blendWarpedImages;
    id<MTLComputePipelineState> _blendWarpedImagesWithMaskTextures;
    id<MTLComputePipelineState> _convert2TextureWithMask;
    id<MTLComputePipelineState> _errorMapDilation;
    BOOL _supportsSIMDShuffle;
    id<MTLComputePipelineState> _blendWarpedImagesWithSubsampledMaskTextures;
    id<MTLComputePipelineState> _blendDCTexturesWithMasks;
}

@property (nonatomic) BOOL isLiteSynthesis;
@property (nonatomic) float errorTolerance;
@property (nonatomic) BOOL createOcclusionMask;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 isLiteSynthesis:(BOOL)a2;
- (id)createBestBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)createOutputBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (void)allocateBuffersWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2 bestBuffer:(id *)a3 outputBuffer:(id *)a4;
- (void)updateBest:(id)a0 error:(id)a1 timeScale:(float)a2 best:(id)a3;
- (void)encodeInitialieBestToCommandBuffer:(id)a0 bestError:(id)a1;
- (void)encodeUpdateBestToCommandBuffer:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 bestError:(id)a4;
- (void)updateOutput:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 fullWarp:(BOOL)a4 bestError:(id)a5 output:(id)a6;
- (void)encodeUpdateOutputToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7;
- (void)encodeNormalizationToCommandBuffer:(id)a0 fromBuffer:(id)a1 toTexture:(id)a2 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 outputBuffer:(id)a7;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7 destination:(id)a8;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 timeScale:(float)a3 destination:(id)a4;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 forwardErrorMap:(id)a3 backwardErrorMap:(id)a4 timeScale:(float)a5 destination:(id)a6;
- (void)encodeErrorMapDilationToCommandBuffer:(id)a0 forwardSource:(id)a1 backwardSource:(id)a2 forwardDestination:(id)a3 backwardDestination:(id)a4 minimumAdjacentHoleCount:(unsigned int)a5 maximumHoleValue:(float)a6;
- (void)encodeBlendTexturesToCommandBuffer:(id)a0 firstWarpedTexture:(id)a1 secondWarpedTexture:(id)a2 forwardErrorMap:(id)a3 backwardErrorMap:(id)a4 synthesizedTexture:(id)a5 timeScale:(float)a6 synthesizedImageWeight:(float)a7 destination:(id)a8;

@end
