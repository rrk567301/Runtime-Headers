@interface HMDHomeActivityPrimaryState : HMDHomeActivityState

+ (id)logCategory;
+ (unsigned long long)stateType;

- (long long)handleEvent:(id)a0;
- (id)initWithParent:(id)a0;
- (void)handleManualStateChangeRequest:(id)a0;
- (BOOL)_transitionToInitialHeldState;
- (void)handleProbeAndTransitionToState:(id)a0;
- (void)onInitialTransition:(id)a0;
- (unsigned long long)probeHomeActivityStateWithTransitionalStateEndDate:(id *)a0;

@end
