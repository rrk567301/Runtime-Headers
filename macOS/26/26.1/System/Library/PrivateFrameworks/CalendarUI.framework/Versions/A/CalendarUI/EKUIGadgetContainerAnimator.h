@class EKViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject

@property BOOL isAnimating;
@property (weak) EKViewController *viewController;
@property (retain) NSMapTable *animations;
@property BOOL runningAnimations;

+ (id)animatorForEventViewController:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (double)_animationLength;
- (id)_rangeForContainer:(id)a0 withOriginOffset:(double)a1 heightDifference:(double)a2;
- (BOOL)addExpandCollapseAnimationForGadgetContainer:(id)a0 isExpanding:(BOOL)a1;
- (BOOL)containsAnimationForGadgetContainer:(id)a0;
- (BOOL)hasAnimations;
- (void)runAnimationsWithCompletionBlock:(id /* block */)a0;

@end
