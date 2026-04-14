@class SHListeningOuterCirclesLayer, SHListeningAutoShadowLayer, SHInnerCircleMaskLayer, SHPalette, CALayer, SHListeningInnerCirclesLayer, SHShazamButtonLayer;
@protocol SHListeningLayerDelegate;

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>

@property (weak) id<SHListeningLayerDelegate> viewDelegate;
@property long long state;
@property (retain) SHShazamButtonLayer *shazamButtonLayer;
@property (retain) CALayer *autoShadowContainerLayer;
@property (retain) CALayer *innerCirclesContainerLayer;
@property (retain) CALayer *innerCirclesSecondaryContainerLayer;
@property (retain) SHListeningInnerCirclesLayer *innerCirclesLayer;
@property (retain) SHListeningOuterCirclesLayer *outerCirclesLayer;
@property (retain) SHListeningAutoShadowLayer *autoShadowLayer;
@property (retain) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer;
@property (retain) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer;
@property (retain) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer;
@property (readonly) SHPalette *palette;
@property BOOL shouldPerformIntroAnimation;
@property double bass;
@property double treble;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)buttonWillFinishDrawingShazamShape;
- (void)buttonDidFinishDrawingShazamShape;
- (id)initWithIntroAnimation:(BOOL)a0 useCustomCompatibleBackground:(BOOL)a1;
- (void)buildView;
- (void)centerLayer:(id)a0 inSuperLayer:(id)a1 withRelativeSize:(double)a2;
- (void)processBass:(double)a0 treble:(double)a1;
- (void)processBassForInnerCircle:(double)a0;
- (void)processTrebleForOuterCircles:(double)a0;
- (void)processBassForShazamButton:(double)a0;
- (void)startIdleAnimation;
- (void)startActiveListeningAnimation;
- (void)startPassiveListeningAnimation;
- (void)stopListeningAnimations;
- (void)stopAllAnimations;
- (void)stopAllAnimationsWithCompletionHandler:(id /* block */)a0;
- (void)addAutoAnimationInitialShazamButtonPulse;
- (void)addTouchDownAnimation;
- (void)animateToIdleStateWithCompletion:(id /* block */)a0;
- (void)addInnerCirclesLayer;
- (void)addOuterCirclesLayer;
- (void)addAutoShadowLayer;
- (void)addInnerCirclesToShazamButtonMaskLayer;
- (void)addInnerCircleToAutoShadowMaskLayer;
- (void)addAutoShadowToShazamButtonMaskLayer;
- (void)removeAnimationLayers;

@end
