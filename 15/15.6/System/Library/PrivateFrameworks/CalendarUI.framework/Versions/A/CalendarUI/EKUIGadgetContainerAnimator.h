@class EKViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject

@property char isAnimating;
@property (weak) EKViewController *viewController;
@property (retain) NSMapTable *animations;
@property char runningAnimations;

+ (id)animatorForEventViewController:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (double)_animationLength;
- (id)_rangeForContainer:(id)a0 withOriginOffset:(double)a1 heightDifference:(double)a2;
- (char)addExpandCollapseAnimationForGadgetContainer:(id)a0 isExpanding:(char)a1;
- (char)containsAnimationForGadgetContainer:(id)a0;
- (char)hasAnimations;
- (void)runAnimationsWithCompletionBlock:(id /* block */)a0;

@end
