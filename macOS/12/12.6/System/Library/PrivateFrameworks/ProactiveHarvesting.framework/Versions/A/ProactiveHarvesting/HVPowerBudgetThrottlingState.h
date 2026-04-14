@class NSObject;
@protocol OS_os_log;

@interface HVPowerBudgetThrottlingState : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_os_log> *_log;
    struct { unsigned int magic; int opsLeft; long long nsecLeft; int extraOpsLeft; int budgetState; long long timeOfLastChange; } _state;
    unsigned long long _absTimeAtOpStart;
    unsigned long long _timeSinceOpStart;
    int _fd;
    BOOL _opInProgress;
    BOOL _dirty;
    BOOL _wasOnBattery;
    BOOL _wasEnabled;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)state;
- (void)updateState:(unsigned int)a0;
- (void)endWork;
- (BOOL)canDoDiscretionaryWork;
- (id)initWithPath:(id)a0 log:(id)a1;
- (BOOL)canDoDiscretionaryWork:(unsigned int *)a0;
- (void)startWork;
- (BOOL)canDoExtraDiscretionaryWork;
- (void)didConsumeAnExtraBudgetedOperation;
- (void)refillState;
- (void)checkBatteryStateForRefill;

@end
