@class NSString, NSArray, CALayer, NSMutableArray, NSColor;
@protocol PKFingerprintGlyphViewDelegate;

@interface PKFingerprintGlyphView : NSView <PKMicaResizableView> {
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    char _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    char _rotatingRing;
    NSString *_rotationAnimationKey;
}

@property (copy, nonatomic) NSColor *primaryColor;
@property (copy, nonatomic) NSColor *secondaryColor;
@property (nonatomic) char fadeOnRecognized;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) CALayer *contentLayer;
@property (weak, nonatomic) id<PKFingerprintGlyphViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })boundsSizeToMatchPointScale:(double)a0;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPrimaryColor:(id)a0 animated:(char)a1;
- (void)setState:(long long)a0 animated:(char)a1 completionHandler:(id /* block */)a2;
- (void)_applyColor:(id)a0 toShapeLayers:(id)a1 animated:(char)a2;
- (void)_applyPrimaryColorAnimated:(char)a0;
- (void)_applySecondaryColorAnimated:(char)a0;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)a0 withTransitionIndex:(unsigned long long)a1;
- (void)_endRotationAnimation;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)a0;
- (void)_executeTransitionCompletionHandlers:(char)a0;
- (void)_finishTransitionForIndex:(unsigned long long)a0;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)a0 animated:(char)a1;
- (void)_restartRotationIfNecessary;
- (void)_setProgress:(double)a0 withDuration:(double)a1 forShapeLayerAtIndex:(unsigned long long)a2;
- (void)_setRingState:(unsigned long long)a0 withTransitionIndex:(unsigned long long)a1 animated:(char)a2;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)a0 animated:(char)a1;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)a0;
- (void)_startRotationAnimation;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)a0;
- (void)_updateRotationAnimationsIfNecessary;
- (id)pathStateForLayer:(id)a0;
- (void)setContentLayerOpacity:(double)a0 withDuration:(double)a1;
- (void)setPathState:(id)a0 forLayer:(id)a1;
- (void)setProgress:(double)a0 withDuration:(double)a1;
- (void)setRecognizedIfNecessaryWithCompletion:(id /* block */)a0;
- (void)setSecondaryColor:(id)a0 animated:(char)a1;

@end
