@class CCDisplayCorrectionWarpProvider, NSString, CCBlurFastWorldDepthGaussian, CCTextureBlitter, CCBoraMeshEncoder, CCPassthroughDepthWarper, CCMTLBufferAllocator, CCIndirectCommandBuffer;
@protocol MTLTexture;

@interface CCDisplayCorrectionPipeline : NSObject <CCVisitable> {
    struct CCDisplayCorrectionPipelineData { struct CCDisplayCorrectionPipelineTextures { id<MTLTexture> depthPreBlurTexture; } textures[2]; struct CCDisplayCorrectionPipelineProviders { CCBlurFastWorldDepthGaussian *preBlurAlgorithm; CCPassthroughDepthWarper *depthWarper; CCBlurFastWorldDepthGaussian *postBlurAlgorithm; CCTextureBlitter *reprojectedDepthBlitter; CCDisplayCorrectionWarpProvider *warpProviderForTarget[2]; CCBoraMeshEncoder *meshEncoderForTarget[2]; } providers[2]; struct { CCIndirectCommandBuffer *videoAndMatting; CCIndirectCommandBuffer *videoOnly; CCIndirectCommandBuffer *videoMattingAndZoom; CCIndirectCommandBuffer *videoAndZoom; } commandBuffers; } _pipelineData;
    struct CCDisplayCorrectionSharedPipelineState { id x0; long long x1; id x2; struct CCDisplayCorrectionFlags { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; } x3; struct CCDisplayCorrectionCyclopeanData { id x0; id x1; } x4; struct CCDisplayCorrectionStereoData { id x0[2]; id x1; id x2; id x3; id x4[2]; id x5; id x6; id x7; id x8; } x5[2]; struct CCDisplayCorrectionStereoDescriptors { id x0; id x1; id x2[2]; id x3[2]; id x4; id x5; } x6[2]; } *_frame;
    CCMTLBufferAllocator *_mtlAllocator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptVisitor:(id)a0;
- (void).cxx_destruct;

@end
