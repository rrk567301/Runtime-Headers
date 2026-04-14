@class NSDate;

@interface HMDHomeActivityTransitionalState : HMDHomeActivityState

@property (retain, nonatomic) NSDate *transitionalStateEndDate;

- (void).cxx_destruct;
- (void)handleProbedTransitionalStateEndDate:(id)a0 withEvent:(id)a1;
- (void)onInitialTransition:(id)a0;

@end
