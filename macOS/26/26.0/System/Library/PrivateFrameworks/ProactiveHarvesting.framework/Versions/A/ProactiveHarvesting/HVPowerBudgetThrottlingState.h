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
    BOOL _hasClassCUnlock;
}

- (unsigned char)canDoDiscretionaryWork;
- (id)state;
- (void)dealloc;
- (void)checkBatteryStateForRefill;
- (id)initWithPath:(id)a0 log:(id)a1;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void)endWork;
- (void)updateState:(unsigned int)a0;
- (void)startWork;
- (void)didConsumeAnExtraBudgetedOperation;
- (unsigned char)canDoDiscretionaryWork:(unsigned int *)a0;
- (void)refillState;
- (void).cxx_destruct;

@end
