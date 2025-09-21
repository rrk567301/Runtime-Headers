@class NSString, UXView, NSArray, _UXViewControllerTransitionCoordinator;
@protocol UXViewControllerInteractiveTransitioning, UXViewControllerAnimatedTransitioning;

@interface _UXViewControllerTransitionContext : NSObject <UXViewControllerContextTransitioning> {
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct { unsigned char interactorImplementsCompletionSpeed : 1; unsigned char interactorImplementsCompletionCurve : 1; unsigned char transitionWasCancelled : 1; unsigned char transitionIsCompleting : 1; } _transitionContextFlags;
}

@property (nonatomic) BOOL initiallyInteractive;
@property (nonatomic, getter=isCurrentlyInteractive) BOOL currentlyInteractive;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) double completionVelocity;
@property (nonatomic) long long completionCurve;
@property (retain, nonatomic, setter=_setAuxContext:) _UXViewControllerTransitionCoordinator *_auxContext;
@property (nonatomic) double duration;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ interactiveUpdateHandler;
@property (nonatomic) long long presentationStyle;
@property (nonatomic, getter=isPresentation) BOOL presentation;
@property (nonatomic) double percentOffset;
@property (weak, nonatomic) id<UXViewControllerAnimatedTransitioning> animator;
@property (weak, nonatomic) id<UXViewControllerInteractiveTransitioning> interactor;
@property (weak, nonatomic) UXView *containerView;
@property (copy, nonatomic) id /* block */ willCompleteHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL transitionIsInFlight;
@property (copy, nonatomic) id /* block */ arbitraryTransitionCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewControllerForKey:(id)a0;
- (void)cancelInteractiveTransition;
- (BOOL)isInteractive;
- (BOOL)_transitionIsCompleting;
- (void)finishInteractiveTransition;
- (BOOL)transitionWasCancelled;
- (double)_previousPercentComplete;
- (void)_setTransitionIsCompleting:(BOOL)a0;
- (void)_setPreviousPercentComplete:(double)a0;
- (void)updateInteractiveTransition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)init;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)a0;
- (void)_enableInteractionForDisabledViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)_disableInteractionForViews:(id)a0;
- (id)_transitionCoordinator;
- (void)__runAlongsideAnimations;
- (void)_interactivityDidChange:(BOOL)a0;
- (void)_runAlongsideCompletions;
- (void)completeTransition:(BOOL)a0;
- (void).cxx_destruct;

@end
