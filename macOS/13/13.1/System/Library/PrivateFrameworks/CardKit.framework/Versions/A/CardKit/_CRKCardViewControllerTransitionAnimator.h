@protocol _CRKCardViewControllerTransitionAnimatorDelegate;

@interface _CRKCardViewControllerTransitionAnimator : NSObject

@property (weak, nonatomic) id<_CRKCardViewControllerTransitionAnimatorDelegate> delegate;

+ (id)sectionShuffleTransitionAnimator;

- (void).cxx_destruct;
- (void)transitionFromCardViewController:(id)a0 toCardViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_prepareAnimationFromCardViewController:(id)a0 toCardViewController:(id)a1 withAnimationCoordinator:(id)a2;

@end
