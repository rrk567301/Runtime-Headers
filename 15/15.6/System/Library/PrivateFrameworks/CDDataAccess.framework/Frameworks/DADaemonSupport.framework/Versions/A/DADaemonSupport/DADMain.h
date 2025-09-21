@class NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DADMain : DADisableableObject <DATransactionMonitorDelegate> {
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    char *_runLoopStoppedRef;
    NSObject<OS_dispatch_queue> *_aggdStatsQueue;
    NSObject<OS_dispatch_source> *_aggdStatsSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMain;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)addSignalHandler;
- (void)didFinishAllXPCTransactions;
- (void)_shutdownDaemon;
- (void)_configureAggdLogging;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)a0;
- (void)_forceShutdownTimerFired:(id)a0;
- (void)_setRunLoopStopped:(char)a0;
- (void)addLanguageChangeHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(id /* block */)a0 wrappedBlock:(id /* block */)a1;
- (void)shutdownDAD;
- (void)waitForSystemAvailabilityWithCompletionBlock:(id /* block */)a0 completionQueue:(id)a1;

@end
