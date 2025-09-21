@class NSHashTable;
@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

@interface WBSFluidProgressController : NSObject {
    NSHashTable *_observers;
}

@property (weak, nonatomic) id<WBSFluidProgressControllerDelegate> delegate;
@property (weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)cancelFluidProgressWithProgressStateSource:(id)a0;
- (void)finishFluidProgressWithProgressStateSource:(id)a0;
- (void)frontmostTabDidChange;
- (void)progressStateSourceDidCommitLoad:(id)a0 loadingSingleResource:(char)a1;
- (void)startFluidProgressWithProgressStateSource:(id)a0;
- (void)startRocketEffectWithProgressStateSource:(id)a0;
- (void)updateFluidProgressWithProgressStateSource:(id)a0;
- (void)setProgressAnimationSuppressed:(char)a0 forProgressStateSource:(id)a1 animated:(char)a2;
- (void)_sendUpdateFluidProgressToObservers:(id)a0 progressState:(id)a1 source:(id)a2 updateAnimationPhase:(char)a3;
- (void)_updateFluidProgressWithProgressStateSource:(id)a0;
- (void)animationStepCompleted:(id)a0;

@end
