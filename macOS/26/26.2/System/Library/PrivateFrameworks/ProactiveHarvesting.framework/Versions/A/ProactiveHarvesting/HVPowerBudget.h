@class _DASScheduler, NSDate, HVPowerBudgetThrottlingState, NSObject;
@protocol OS_os_log, NSObject;

@interface HVPowerBudget : NSObject {
    HVPowerBudgetThrottlingState *_throttlingState;
    NSDate *_lastPlugInTime;
    id<NSObject> _batteryObserver;
    _DASScheduler *_scheduler;
    BOOL _isScheduled;
    _Atomic BOOL _discretionaryWorkInProgress;
    NSObject<OS_os_log> *_log;
}

+ (void)setCanDoWorkOverrideForTesting:(id)a0;
+ (id)defaultBudget;

- (id)initWithThrottleBudget:(id)a0;
- (void)didConsumeAnExtraBudgetedOperation;
- (void)doDiscretionaryWork:(id /* block */)a0 orElse:(id /* block */)a1;
- (void).cxx_destruct;
- (id)throttlingState;
- (void)refillThrottleBudget;
- (unsigned char)canDoDiscretionaryWork;
- (unsigned char)canDoExtraDiscretionaryWork;
- (id)init;
- (void)dealloc;

@end
