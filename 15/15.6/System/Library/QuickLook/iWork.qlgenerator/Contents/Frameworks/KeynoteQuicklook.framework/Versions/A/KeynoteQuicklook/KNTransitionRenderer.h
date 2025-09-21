@class KNAnimatedSlideView, NSString, NSDictionary, CALayer, NSMutableArray, NSMapTable;

@interface KNTransitionRenderer : KNAnimationRenderer <CAAnimationDelegate> {
    CALayer *_backgroundLayer;
    NSMutableArray *_textures;
    NSDictionary *_attributes;
    long long _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    char _shouldAnimateTransition;
    char _animationsRanToCompletion;
    char _hasBeenTornDown;
    id _transitionEndCallbackTarget;
    SEL _transitionEndCallbackSelector;
    char _shouldTearDownIncomingTexture;
}

@property (readonly, nonatomic) KNAnimatedSlideView *incomingAnimatedSlideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)teardown;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (id)plugin;
- (void)stopAnimations;
- (void)animate;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (char)addAnimationsAtTime:(double)a0 relativeToCurrentMediaTime:(char)a1;
- (void)forceRemoveAnimations;
- (void)generateTextures;
- (id)initWithEffectClass:(Class)a0 direction:(unsigned long long)a1 duration:(double)a2 session:(id)a3 attributes:(id)a4 animatedSlideView:(id)a5;
- (char)p_addAnimations:(id)a0 atTime:(double)a1 relativeToCurrentMediaTime:(char)a2;
- (void)p_checkForNullTransitions:(Class)a0;
- (void)p_removeAnimationsShouldForceRemove:(char)a0;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)registerForTransitionEndCallback:(SEL)a0 target:(id)a1;
- (void)removeAnimationsAndFinish:(char)a0;
- (void)renderSlideIndex:(unsigned long long)a0;
- (void)renderTextures;
- (void)renderTexturesSynchronously;
- (void)setupLayerTreeForTransition;
- (void)setupPluginContext;
- (void)updateAnimationsForLayerTime:(double)a0;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(char)a0;

@end
