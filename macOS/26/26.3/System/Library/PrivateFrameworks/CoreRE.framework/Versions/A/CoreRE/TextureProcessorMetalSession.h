@class MPSImageAdd, MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface TextureProcessorMetalSession : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    MPSImageAdd *_mixKernel;
    id<MTLComputePipelineState> _glowrayPipeline;
}

- (id)init;
- (void).cxx_destruct;
- (int)configureGPU;
- (id)initWithLoadingBundlePipelines:(BOOL)a0;
- (int)blitStereoImageTextureIntoSeparateTextures:(id)a0 withCommandBuffer:(id)a1 outputLeftTexture:(id)a2 outputRightTexture:(id)a3;
- (id)createShaderRWTexture2DWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)createShaderRWTexture2DWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 mipmapLevelCount:(unsigned long long)a3;
- (int)loadBundleShaderPipelines;
- (id)makeAlchemistAnimationLoadingTextureFrom:(id)a0 blurSigma:(float)a1 resolution:(int)a2;
- (id)makeAlchemistGlowrayTextureFrom:(id)a0 insetSamplePercent:(float)a1 cornerRadius:(float)a2;
- (id)makeSpatialPhotoMixedLightSpillTextureFrom:(id)a0 blurSigma:(float)a1 resolution:(int)a2;

@end
