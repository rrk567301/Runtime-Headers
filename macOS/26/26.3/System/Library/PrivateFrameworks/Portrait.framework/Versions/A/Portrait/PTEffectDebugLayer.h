@class PTUtil, PTMetalContext, PTEffectRingLightEstimation, PTGraphRenderer, PTEffectDescriptor, PTEffectReactionProvider, PTColorConversion, PTMSRResize, PTDepthConverter, PTEffectRelighting, PTVFXRenderEffect;
@protocol PTRenderState, MTLTexture, MTLBuffer;

@interface PTEffectDebugLayer : NSObject {
    PTMetalContext *_metalContext;
    PTEffectRelighting *_effectRelighting;
    id<PTRenderState> _renderState;
    PTUtil *_util;
    PTColorConversion *_colorConversion;
    PTMSRResize *_msrColorPyramid;
    PTEffectReactionProvider *_reactionProvider;
    id<MTLTexture> _disparityFixedFocus;
    id<MTLBuffer> _faceDisparityArray;
    id<MTLBuffer> _focusDisparityRaw;
    PTEffectDescriptor *_effectDescritor;
    PTEffectRingLightEstimation *_ringLightEstimation;
    PTGraphRenderer *_ringLightEstimationLuxGraph;
    PTGraphRenderer *_ringLightEstimationScreenNitsGraph;
    id<MTLBuffer> _focusDisparityModifier;
    PTGraphRenderer *_srlGraph;
    PTGraphRenderer *_focusDisparityRelightingGraph;
    PTGraphRenderer *_focusDisparityGraph;
    PTGraphRenderer *_faceDisparityGraphs[4];
    PTGraphRenderer *_brightSceneDetector;
    PTVFXRenderEffect *_vfxRenderEffect;
    PTDepthConverter *_depthConverter;
    int _width;
    int _height;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 effectRelighting:(id)a1 ringLightEstimation:(id)a2 effectDescritor:(id)a3 renderState:(id)a4 util:(id)a5 colorConversion:(id)a6 msrColorPyramid:(id)a7 vfxRenderEffect:(id)a8 depthConverter:(id)a9 disparityFixedFocus:(id)a10 faceDisparityArray:(id)a11 focusDisparityRaw:(id)a12 focusDisparityModifiers:(id)a13;
- (void)renderDebugInformation:(long long)a0 effectRenderRequest:(id)a1 reactionStates:(id)a2 disparity:(id)a3 disparityCentered:(id)a4 normal:(id)a5 diffuse:(id)a6 temporalFilter:(id)a7 humanDetections:(id)a8 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a9 fNumber:(float)a10 focusDisparityRaw:(id)a11 useDisparityBufferForReactions:(id)a12 outColor:(id)a13;
- (void)renderDebugSubjectRelighting:(id)a0 humanDetections:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 outYUV:(id)a3 frameIndex:(int)a4;
- (void)renderThumbnailsWithDisparity:(id)a0 disparityCentered:(id)a1 normal:(id)a2 temporalFilter:(id)a3 outYUV:(id)a4;
- (void)setReactionProvider:(id)a0;

@end
