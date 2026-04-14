@class EKViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject

@property BOOL isAnimating;
@property (weak) EKViewController *viewController;
@property (retain) NSMapTable *animations;
@property BOOL runningAnimations;

+ (id)animatorForEventViewController:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addExpandCollapseAnimationForGadgetContainer:(id)a0 isExpanding:(BOOL)a1;
- (BOOL)containsAnimationForGadgetContainer:(id)a0;
- (void)runAnimationsWithCompletionBlock:(id /* block */)a0;
- (BOOL)hasAnimations;
- (double)_animationLength;
- (id)_rangeForContainer:(id)a0 withOriginOffset:(double)a1 heightDifference:(double)a2;

@end
