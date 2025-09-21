@class NSString, NSMutableArray, PXDisplayLink;
@protocol PXNumberAnimatorDisplayLinkTarget;

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget> {
    char _isPerformingChanges;
    struct { char presentationValue; } _needsUpdateFlags;
    struct PXValueAnimationSpec { long long type; double duration; long long curve; double epsilon; double stiffness; double dampingRatio; double initialVelocity; } _currentAnimationSpec;
    NSMutableArray *_animations;
    PXDisplayLink *_displayLink;
    PXDisplayLink *_reusableDisplayLink;
    char _skipFirstNumberWhenAnimationStart;
}

@property (nonatomic, setter=_setPresentationValue:) double presentationValue;
@property (weak, nonatomic) id<PXNumberAnimatorDisplayLinkTarget> displayLinkTarget;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double approximateVelocity;
@property (readonly, nonatomic) char isAnimating;
@property (readonly, nonatomic) char isBeingMutated;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int highFrameRateReason;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) char prepareForAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setValue:(double)a0;
- (id)initWithValue:(double)a0;
- (char)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setAnimating:(char)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)handleDisplayLink:(id)a0;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChangesWithoutAnimation:(id /* block */)a0;
- (void)_invalidatePresentationValue;
- (void)advanceAnimationsToFractionComplete:(double)a0;
- (id)initWithValue:(double)a0 epsilon:(double)a1;
- (void)performChangesUsingDefaultOpacityAnimation:(id /* block */)a0;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)a0 changes:(id /* block */)a1;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)a0 dampingRatio:(double)a1 initialVelocity:(double)a2 changes:(id /* block */)a3;
- (void)performChangesWithDuration:(double)a0 curve:(long long)a1 changes:(id /* block */)a2;
- (void)setValue:(double)a0 animateImmediately:(char)a1;
- (void)_configureDisplayLink:(id)a0;
- (id)_createDisplayLinkDeferredStart:(char)a0;
- (void)_setAnimating:(char)a0 deferredStart:(char)a1;
- (void)_updatePresentationValueIfNeeded;
- (void)setValue:(double)a0 skipFirstNumberWhenAnimationStart:(char)a1;

@end
