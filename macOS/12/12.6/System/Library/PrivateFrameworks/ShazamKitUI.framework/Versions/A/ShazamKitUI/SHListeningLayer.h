@class SHTaggingViewOuterCirclesLayer, SHTaggingViewAutoShadowLayer, SHInnerCircleMaskLayer, CALayer, SHTaggingViewInnerCirclesLayer, SHShazamButtonLayer;
@protocol SHListeningLayerDelegate;

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>

@property (weak) id<SHListeningLayerDelegate> viewDelegate;
@property long long state;
@property (retain) SHShazamButtonLayer *shazamButtonLayer;
@property (retain) CALayer *autoShadowContainerLayer;
@property (retain) CALayer *innerCirclesContainerLayer;
@property (retain) CALayer *innerCirclesSecondaryContainerLayer;
@property (retain) SHTaggingViewInnerCirclesLayer *innerCirclesLayer;
@property (retain) SHTaggingViewOuterCirclesLayer *outerCirclesLayer;
@property (retain) SHTaggingViewAutoShadowLayer *autoShadowLayer;
@property (retain) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer;
@property (retain) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer;
@property (retain) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)buildView;
- (void)buttonWillFinishDrawingShazamShape;
- (void)buttonDidFinishDrawingShazamShape;
- (void)centerLayer:(id)a0 inSuperLayer:(id)a1 withRelativeSize:(double)a2;
- (void)startManualTaggingAnimation;
- (void)startAutoTaggingAnimation;
- (void)removeAnimationLayers;
- (void)startIdleAnimation;
- (void)animateToIdleStateWithCompletion:(id /* block */)a0;
- (void)processBassForInnerCircle:(double)a0;
- (void)processBassForShazamButton:(double)a0;
- (void)processTrebleForOuterCircles:(double)a0;
- (void)addInnerCirclesLayer;
- (void)addOuterCirclesLayer;
- (void)addInnerCirclesToShazamButtonMaskLayer;
- (void)addAutoShadowLayer;
- (void)addInnerCircleToAutoShadowMaskLayer;
- (void)addAutoShadowToShazamButtonMaskLayer;
- (void)addAutoAnimationInitialShazamButtonPulse;
- (void)startActiveListeningAnimation;
- (void)startPassiveListeningAnimation;
- (void)stopListeningAnimations;
- (void)processBass:(double)a0 treble:(double)a1;
- (void)addTouchDownAnimation;

@end
