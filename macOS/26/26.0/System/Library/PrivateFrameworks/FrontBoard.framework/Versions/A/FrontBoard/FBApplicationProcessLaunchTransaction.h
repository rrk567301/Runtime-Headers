@class FBWaitForProcessDeathTransaction, FBProcessManager, RBSProcessIdentity, FBProcess, FBProcessExecutionContext, BSAtomicSignal;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    id /* block */ _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
}

@property (readonly, nonatomic) FBProcess *process;
@property (readonly, nonatomic) BOOL failedLaunch;
@property (readonly, nonatomic) BOOL exited;

- (void)add:(id)a0;
- (void)_willFailWithReason:(id)a0;
- (void)remove:(id)a0;
- (void)_queue_processWillLaunch:(id)a0;
- (void)_queue_noteExited;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (id)initWithApplicationProcess:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_customizedDescriptionProperties;
- (id)initWithApplicationBundleID:(id)a0 executionContextProvider:(id /* block */)a1;
- (id)init;
- (void)_queue_launchProcess:(id)a0;
- (BOOL)_canBeInterrupted;
- (id)initWithProcessIdentity:(id)a0 executionContextProvider:(id /* block */)a1;
- (void)_willComplete;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_queue_finishProcessLaunch:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)_didComplete;
- (void)_begin;
- (void).cxx_destruct;

@end
