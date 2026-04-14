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

+ (id)defaultBudget;
+ (void)setCanDoWorkOverrideForTesting:(id)a0;

- (void)didConsumeAnExtraBudgetedOperation;
- (void)refillThrottleBudget;
- (id)initWithThrottleBudget:(id)a0;
- (unsigned char)canDoDiscretionaryWork;
- (void)dealloc;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void).cxx_destruct;
- (void)doDiscretionaryWork:(id /* block */)a0 orElse:(id /* block */)a1;
- (id)throttlingState;
- (id)init;

@end
