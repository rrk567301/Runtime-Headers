@class PTUtil, PTMetalContext, NSArray, _TtC3VFX9VFXEffect, PTVFXSoftAlphaMask, PTEffectReactionBackgroundDimming, PTColorConversion, VFXRenderer, PTHumanDetections, _TtC3VFX9VFXCamera, MTLRenderPassDescriptor, NSMutableDictionary;
@protocol MTLComputePipelineState, _TtP3VFX10VFXBinding_;

@interface PTVFXRenderEffect : NSObject {
    PTMetalContext *_metalContext;
    PTColorConversion *_colorConversion;
    PTEffectReactionBackgroundDimming *_reactionBackground;
    PTHumanDetections *_humanDetections;
    _TtC3VFX9VFXEffect *_lighting;
    id<_TtP3VFX10VFXBinding_> _lightBinding;
    PTVFXSoftAlphaMask *_softAlphaMask;
    PTUtil *_util;
    float _dimmingFactor;
    char _simulationWasSkippedForPreviousFrame;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSizeROI;
    VFXRenderer *_vfxRenderer;
    _TtC3VFX9VFXCamera *_camera;
    unsigned int _cameraRotationDegrees;
    unsigned long long _aspectRatio;
    struct { void /* unknown type, empty encoding */ columns[4]; } _inverseCameraProjection;
    float _emitZValue;
    char _emitNewReaction;
    NSMutableDictionary *_effectBindings;
    NSMutableDictionary *_activeReactions;
    id<MTLComputePipelineState> _convertRGBAlpha[9];
}

@property (retain) NSArray *reactionTemplates;
@property (readonly) unsigned long long depthOutputPixelFormat;
@property (readonly) unsigned long long rgbaOutputPixelFormat;
@property void /* unknown type, empty encoding */ depthNearFar;
@property char reverseZ;

+ (void)setRandomizationSeed:(int)a0;
+ (void /* unknown type, empty encoding */)transformVideoPositionToCropCoordinates:(SEL)a0 effectRenderRequest:(id)a1 flipYAxis:(char)a2;
+ (void /* unknown type, empty encoding */)transformVideoRectToCropCoordinates:(SEL)a0 effectRenderRequest:(id)a1;

- (void).cxx_destruct;
- (id)activeReactions;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })colorSize;
- (id)addNewEffectFromEvent:(id)a0 renderRequest:(id)a1 time:(double)a2 presenterOverlaySmall:(char)a3;
- (char)emitNewReaction;
- (void)asyncVFXInit;
- (char)computeSoftAlphaMask;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 inAlphaMask:(id)a2 outRGBA:(id)a3 toLinear:(char)a4 transferFunction:(id)a5;
- (float)dimmingFactor;
- (int)initVFX:(char)a0 asyncInitQueue:(id)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 colorConversion:(id)a2 prewarmOnly:(char)a3 humanDetections:(id)a4 asyncInitQueue:(id)a5;
- (int)maxReactionEffectComplexity;
- (void)removeAllActiveReactions;
- (void)removeEffectBindingWithKey:(id)a0;
- (int)render:(id)a0 effectRGBA:(id)a1 effectDepth:(id)a2;
- (int)renderWithBackgroundDimming:(id)a0 effectRGBA:(id)a1 inCenteredDisparity:(id)a2 inSegmentation:(id)a3 effectDepth:(id)a4 disparityFiltered:(id)a5 focusDisparityModifiers:(id)a6 renderRequest:(id)a7 debugType:(long long)a8;
- (void)setupCommonVFXSceneLoadOptions:(id)a0 metalLibraryURL:(id)a1 commandQueue:(id)a2;
- (void)updateCameraProjection;
- (char)updateWithRenderRequest:(id)a0 lastFrameTime:(double)a1;
- (char)useSoftAlphaMask:(unsigned long long)a0;

@end
