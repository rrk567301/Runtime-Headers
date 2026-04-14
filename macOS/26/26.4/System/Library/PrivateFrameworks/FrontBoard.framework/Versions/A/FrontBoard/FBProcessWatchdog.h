@class FBProcessCPUStatistics, FBProcessWatchdogEventContext, BSAtomicSignal, RBSProcessHandle;

@interface FBProcessWatchdog : FBSProcessWatchdog {
    RBSProcessHandle *_handle;
    BSAtomicSignal *_unblockSignal;
}

@property (readonly, nonatomic) long long event;
@property (readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext;
@property (readonly, retain, nonatomic) FBProcessCPUStatistics *cpuStatistics;

- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (id)_policyDesc;
- (void)_getPolicyWallTime:(out double *)a0 cpuTime:(out double *)a1;
- (id)initWithProcess:(id)a0 context:(id)a1 policy:(id)a2;

@end
