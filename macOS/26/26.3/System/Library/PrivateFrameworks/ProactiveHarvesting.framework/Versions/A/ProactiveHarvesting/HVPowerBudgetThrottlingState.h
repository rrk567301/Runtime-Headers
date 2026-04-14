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

- (void)didConsumeAnExtraBudgetedOperation;
- (unsigned char)canDoDiscretionaryWork;
- (unsigned char)canDoDiscretionaryWork:(unsigned int *)a0;
- (id)state;
- (void)startWork;
- (void).cxx_destruct;
- (void)updateState:(unsigned int)a0;
- (void)dealloc;
- (void)refillState;
- (id)initWithPath:(id)a0 log:(id)a1;
- (void)endWork;
- (void)checkBatteryStateForRefill;
- (unsigned char)canDoExtraDiscretionaryWork;

@end
