@class TSDFPSCounter, KNAnimatedSlideView, NSString, NSDictionary, CALayer, NSMutableArray, NSMapTable;

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate> {
    CALayer *_backgroundLayer;
    NSMutableArray *_textures;
    NSDictionary *_attributes;
    long long _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    BOOL _shouldAnimateTransition;
    BOOL _animationsRanToCompletion;
    BOOL _hasBeenTornDown;
    id _transitionEndCallbackTarget;
    SEL _transitionEndCallbackSelector;
    TSDFPSCounter *_FPSCounter;
    BOOL _shouldTearDownIncomingTexture;
}

@property (readonly, nonatomic) KNAnimatedSlideView *incomingAnimatedSlideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)plugin;
- (void)teardown;
- (void)stopAnimations;
- (void)animate;
- (void)setupPluginContext;
- (id)initWithEffectClass:(Class)a0 direction:(unsigned long long)a1 duration:(double)a2 session:(id)a3 attributes:(id)a4 animatedSlideView:(id)a5;
- (void)registerForTransitionEndCallback:(SEL)a0 target:(id)a1;
- (void)p_checkForNullTransitions:(Class)a0;
- (void)setupLayerTreeForTransition;
- (void)generateTextures;
- (void)renderTextures;
- (void)renderTexturesSynchronously;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)a0;
- (void)renderSlideIndex:(unsigned long long)a0;
- (BOOL)addAnimationsAtTime:(double)a0 relativeToCurrentMediaTime:(BOOL)a1;
- (BOOL)p_addAnimations:(id)a0 atTime:(double)a1 relativeToCurrentMediaTime:(BOOL)a2;
- (void)updateAnimationsForLayerTime:(double)a0;
- (void)p_removeAnimationsShouldForceRemove:(BOOL)a0;
- (void)removeAnimationsAndFinish:(BOOL)a0;
- (void)forceRemoveAnimations;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (void)updateAnimationTestingLog;

@end
