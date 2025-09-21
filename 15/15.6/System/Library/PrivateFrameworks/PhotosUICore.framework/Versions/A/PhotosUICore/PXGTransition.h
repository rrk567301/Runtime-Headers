@class PXGLayout, NSSet;

@interface PXGTransition : NSObject

@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) char invalid;
@property (readonly, nonatomic) char animatingTowardsInitialState;
@property (readonly, nonatomic) char animatingTowardsFinalState;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) char isIntercative;
@property (readonly, nonatomic) NSSet *animations;
@property (nonatomic) float fractionCompleted;

- (void).cxx_destruct;
- (void)invalidate;
- (void)animateToFinalStateWithCompletionBlock:(id /* block */)a0;
- (void)animateToInitialStateWithCompletionBlock:(id /* block */)a0;
- (id)initWithAnimations:(id)a0 layout:(id)a1;

@end
