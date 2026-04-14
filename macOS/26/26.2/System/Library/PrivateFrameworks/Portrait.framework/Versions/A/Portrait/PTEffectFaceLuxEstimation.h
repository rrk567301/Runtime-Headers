@class PTMetalContext, PTHumanDetections, PTPersonSemanticsNetwork, PTMSRResize;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface PTEffectFaceLuxEstimation : NSObject {
    PTHumanDetections *_humanDetections;
    PTPersonSemanticsNetwork *_personSemanticsNetwork;
    PTMSRResize *_MSRResize;
    PTMetalContext *_metalContext;
    struct __CVBuffer { } *_lowResYUV;
    id<MTLTexture> _luma;
    id<MTLTexture> _chroma;
    id<MTLBuffer> _faceLuxBuffer[2];
    int _lastFrameIndexWithFaceRect;
    id<MTLComputePipelineState> _faceLuxEstimation;
    id<MTLComputePipelineState> _faceLuxEstimationFromAEStats;
    id<MTLTexture> _rgbFromAEStats;
    id<MTLTexture> _lumaFromAEStats;
    void /* unknown type, blank encoding */ _aeThumbnailRGB[1024];
    void /* unknown type, blank encoding */ _aeThumbnailLuma[256];
}

- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)largestFaceRect;
- (id)rgbFromAEStats:(id)a0;
- (float)computeFaceLux:(float)a0 frameIndex:(int)a1;
- (float)faceLuxLevel:(float)a0 inColorBuffer:(struct __CVBuffer { } *)a1 frameIndex:(int)a2;
- (struct PTEffectFaceLuxEstimationOutput { float x0; float x1; float x2; float x3; float x4; float x5; float x6; })faceLuxLevelFromAEStats:(id)a0 globalLuxLevel:(float)a1 frameIndex:(int)a2;
- (id)initWithMetalContext:(id)a0 humanDetections:(id)a1 effectDescriptor:(id)a2;
- (id)lumaFromAEStats:(id)a0;

@end
