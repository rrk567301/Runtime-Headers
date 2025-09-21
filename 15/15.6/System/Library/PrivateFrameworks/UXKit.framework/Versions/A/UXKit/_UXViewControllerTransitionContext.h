@class NSString, UXView, NSArray, _UXViewControllerTransitionCoordinator;
@protocol UXViewControllerInteractiveTransitioning, UXViewControllerAnimatedTransitioning;

@interface _UXViewControllerTransitionContext : NSObject <UXViewControllerContextTransitioning> {
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct { unsigned char interactorImplementsCompletionSpeed : 1; unsigned char interactorImplementsCompletionCurve : 1; unsigned char transitionWasCancelled : 1; unsigned char transitionIsCompleting : 1; } _transitionContextFlags;
}

@property (nonatomic) char initiallyInteractive;
@property (nonatomic, getter=isCurrentlyInteractive) char currentlyInteractive;
@property (nonatomic, getter=isAnimated) char animated;
@property (nonatomic) double completionVelocity;
@property (nonatomic) long long completionCurve;
@property (retain, nonatomic, setter=_setAuxContext:) _UXViewControllerTransitionCoordinator *_auxContext;
@property (nonatomic) double duration;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ interactiveUpdateHandler;
@property (nonatomic) long long presentationStyle;
@property (nonatomic, getter=isPresentation) char presentation;
@property (nonatomic) double percentOffset;
@property (weak, nonatomic) id<UXViewControllerAnimatedTransitioning> animator;
@property (weak, nonatomic) id<UXViewControllerInteractiveTransitioning> interactor;
@property (weak, nonatomic) UXView *containerView;
@property (copy, nonatomic) id /* block */ willCompleteHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) char transitionIsInFlight;
@property (copy, nonatomic) id /* block */ arbitraryTransitionCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)isInteractive;
- (void)__runAlongsideAnimations;
- (void)_disableInteractionForViews:(id)a0;
- (void)_enableInteractionForDisabledViews;
- (void)_interactivityDidChange:(char)a0;
- (double)_previousPercentComplete;
- (void)_runAlongsideCompletions;
- (void)_setPreviousPercentComplete:(double)a0;
- (void)_setTransitionIsCompleting:(char)a0;
- (id)_transitionCoordinator;
- (char)_transitionIsCompleting;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)a0;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (char)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)a0;
- (id)viewControllerForKey:(id)a0;

@end
