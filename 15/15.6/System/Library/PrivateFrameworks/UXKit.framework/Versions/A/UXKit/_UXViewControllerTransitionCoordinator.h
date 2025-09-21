@class NSString, NSMutableArray, _UXViewControllerTransitionContext;

@interface _UXViewControllerTransitionCoordinator : NSObject <UXViewControllerTransitionCoordinator>

@property (nonatomic, setter=_setMainContext:) _UXViewControllerTransitionContext *_mainContext;
@property (retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations;
@property (retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews;
@property (retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions;
@property (retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isCancelled;
- (id)containerView;
- (long long)presentationStyle;
- (double)percentComplete;
- (char)isInteractive;
- (double)transitionDuration;
- (char)isAnimated;
- (long long)completionCurve;
- (id)_alongsideAnimations:(char)a0;
- (id)_alongsideCompletions:(char)a0;
- (void)_applyBlocks:(id)a0 releaseBlocks:(id /* block */)a1;
- (id)_interactiveChangeHandlers:(char)a0;
- (char)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (char)animateAlongsideTransitionInView:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (double)completionVelocity;
- (id)initWithMainContext:(id)a0;
- (char)initiallyInteractive;
- (char)isCompleting;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)a0;
- (id)viewControllerForKey:(id)a0;

@end
