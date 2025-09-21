@class HMFTimer, HMDHomeActivityStateHoldInfo, NSString;

@interface HMDHomeActivityHoldState : HMDHomeActivityState <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *holdTimer;
@property (retain) HMDHomeActivityStateHoldInfo *activityStateHoldInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)stateType;

- (long long)handleEvent:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)cancelHoldTimer;
- (void)handleManualStateChangeRequest:(id)a0;
- (BOOL)applyHoldWithHoldInfo:(id)a0;
- (void)cancelHoldAndStartProbeWithProbingReason:(unsigned long long)a0 transitionReason:(long long)a1;
- (void)handleEnterEvent:(id)a0;
- (void)handleExitEvent:(id)a0;
- (void)handleHoldTimerExpired;
- (void)onInitialTransition:(id)a0;
- (void)scheduleHoldExpiredTimerFromHoldInfo:(id)a0;

@end
