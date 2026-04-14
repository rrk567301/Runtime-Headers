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

- (double)completionVelocity;
- (id)viewControllerForKey:(id)a0;
- (BOOL)isAnimated;
- (long long)presentationStyle;
- (long long)completionCurve;
- (double)transitionDuration;
- (BOOL)initiallyInteractive;
- (BOOL)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (id)containerView;
- (BOOL)isInteractive;
- (BOOL)animateAlongsideTransitionInView:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isCancelled;
- (BOOL)isCompleting;
- (double)percentComplete;
- (void)_applyBlocks:(id)a0 releaseBlocks:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_alongsideCompletions:(BOOL)a0;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)a0;
- (id)_interactiveChangeHandlers:(BOOL)a0;
- (id)_alongsideAnimations:(BOOL)a0;
- (id)initWithMainContext:(id)a0;

@end
