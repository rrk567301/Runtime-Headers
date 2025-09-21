@class FBProcessCPUStatistics, FBProcessWatchdogEventContext, BSAtomicSignal, RBSProcessHandle;

@interface FBProcessWatchdog : FBSProcessWatchdog {
    RBSProcessHandle *_handle;
    BSAtomicSignal *_unblockSignal;
}

@property (readonly, nonatomic) long long event;
@property (readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext;
@property (readonly, retain, nonatomic) FBProcessCPUStatistics *cpuStatistics;

- (id)_policyDesc;
- (id)initWithProcess:(id)a0 context:(id)a1 policy:(id)a2;
- (void)deactivate;
- (void)_getPolicyWallTime:(out double *)a0 cpuTime:(out double *)a1;
- (void)activate;
- (void).cxx_destruct;

@end
