@class PTBackgroundReplacement, PTNormalAndDiffuseEstimation, PTEffectRelighting, PTEffectReactionProvider, PTEffectTemporalFilter, PTMSRResize, NSArray, PTTexture, PTPyramid, PTEffectDebugLayer, PTVFXRenderEffect, PTEffectDescriptor, PTRenderPipeline, PTEffectPersonSegmentation, PTDepthConverter, PTMetalContext, PTCVMNetwork, PTRenderRequest, PTGuidedFilter, PTColorConversion, PTMSRResizeAdditionalOutput, PTHumanDetections, PTEffectResources;
@protocol PTRenderState, MTLTexture, MTLBuffer;

@interface PTEffectRenderer : NSObject {
    PTMetalContext *_metalContext;
    struct __CVMetalTextureCache { } *_textureCache;
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
    PTPyramid *_colorPyramid;
    id<MTLTexture> _disparityCenteredUpscaledSDOF;
    id<MTLTexture> _disparityCenteredUpscaledReactions;
    id<MTLTexture> _disparityCenteredUpscaledWithScreenCaptureRect;
    id<MTLTexture> _upscaledPersonSegmentation;
    PTBackgroundReplacement *_backgroundReplacement;
    id<MTLTexture> _diffuse;
    struct __CVBuffer *_intermediateColorPixelbuffers[2];
    PTTexture *_intermediateColor[2];
    id<MTLBuffer> _faceDisparityArray;
    id<MTLBuffer> _lastFocus;
    id<MTLBuffer> _focusDisparityRaw;
    PTMSRResize *_msrColorPyramid;
    id<MTLBuffer> _focusDisparityModifiers;
    id<MTLBuffer> _studioLightEffectModifier;
    id<MTLBuffer> _useDisparityBufferForReactions;
    PTGuidedFilter *_guidedFilter;
    id<MTLTexture> _guideRGBAUpscale;
    id<MTLTexture> _guideRGBACoefficients;
    PTCVMNetwork *_cvmNetwork;
    PTEffectRelighting *_effectRelighting;
    PTColorConversion *_colorConversion;
    PTRenderRequest *_sdofRenderRequest;
    PTEffectDebugLayer *_debugLayer;
    BOOL _asynchronous;
    int _frameIndex;
    int _networkFrameIndex;
    BOOL _runCVMNetworkPreviousFrame;
    BOOL _renderStudioLightPreviousFrame;
    BOOL _renderSegmentationPreviousFrame;
    double _lastFrameTime;
    unsigned long long _lastEffectType;
    float _focusDisparityMax;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetSDOF;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetReactions;
    struct PTDisparityFocusOffset { float disparityOffsetFactor; float offsetInMeters; } _disparityFocusOffsetStudioLight;
    float _focusDisparityUpdateCoefficientSDOF;
    float _focusDisparityUpdateCoefficientStudioLight;
    PTEffectDescriptor *_effectDescriptor;
    unsigned long long _availableEffectTypes;
    PTNormalAndDiffuseEstimation *_diffuseEstimation;
    PTEffectTemporalFilter *_temporalFilter;
    PTEffectReactionProvider *_reactionProvider;
    NSArray *_reactionsToRender;
    BOOL _externalHandDetectionsAvailable;
    long long _debugType;
    PTEffectPersonSegmentation *_personSegmentation;
    PTMSRResizeAdditionalOutput *_personSegmentationInput;
    PTVFXRenderEffect *_vfxEffect;
    id<MTLTexture> _vfxDepthBuffer;
    id<MTLTexture> _vfxRenderTarget;
    PTDepthConverter *_depthConverter;
    PTHumanDetections *_humanDetections;
    PTEffectResources *_sharedResources;
    BOOL _studiolightFromSegmentation;
}

@property long long effectQuality;

+ (BOOL)useStudioLightFromSegmentation:(id)a0;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })segmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void)setDebug:(long long)a0;
- (void)reset:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)activeReactions;
- (BOOL)isRenderRequiredForRequest:(id)a0;
- (void)copyInColor:(id)a0 toOutColor:(id)a1;
- (id)copyTemporalState:(id)a0;
- (void)createVfxTextures:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithDescriptor:(id)a0 metalContext:(id)a1 depthPrioritization:(long long)a2 humanDetections:(id)a3 prevTemporalState:(id)a4 sharedResources:(id)a5;
- (void)removeAllActiveReactions;
- (int)render:(id)a0 waitUntilCompleted:(BOOL)a1 gpuCompleted:(id /* block */)a2;
- (int)renderReaction:(id)a0 effectRenderRequest:(id)a1;
- (int)runGestureDetection:(id)a0 asyncWork:(id)a1;

@end
