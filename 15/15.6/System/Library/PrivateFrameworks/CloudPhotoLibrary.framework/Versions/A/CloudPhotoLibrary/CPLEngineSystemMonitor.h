@class NSString, CPLEngineLibrary, NSURL, CPLNetworkWatcher, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLBatteryMonitorDelegate, CPLEngineComponent> {
    char _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    char _supportsBudgetOverride;
    char _modifyingBudgetOverride;
    unsigned long long _newBudgetsToOverride;
    unsigned long long _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    char _allowOperationsBoost;
    char _allowBackgroundOperationsBoost;
    char _hasSetupBatteryMonitor;
}

@property (class, nonatomic) char shouldIgnoreLowDiskSpace;

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long diskPressureState;
@property (readonly) unsigned long long freeDiskSpaceSize;
@property (readonly) char isNetworkConnected;
@property (readonly) char isNetworkConstrained;
@property (readonly) char isOnCellularOrUnknown;
@property (readonly) char isDataBudgetOverriden;
@property (readonly) char hasEnoughPowerForAutomaticOverride;
@property (readonly) char canBoostOperations;
@property (readonly) char canBoostBackgroundOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)a0;
+ (id)descriptionForBudget:(unsigned long long)a0;
+ (id)descriptionForBudgets:(unsigned long long)a0;
+ (void)enumerateSystemBudgets:(unsigned long long)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)componentName;
- (void)batteryLevelDidChangeWithLevel:(double)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)_attemptScheduleRecoveryOverride:(unsigned long long)a0 withReason:(unsigned long long)a1;
- (double)_minimumBatteryLevelForAutoOverrideEnergyBudget;
- (void)_startOverridingBudget:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)_stopOverridingBudget:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)_withSystemBudgetOverride:(id /* block */)a0;
- (void)closeAndDeactivate:(char)a0 completionHandler:(id /* block */)a1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)a0;
- (id)initWithEngineLibrary:(id)a0;
- (void)scheduledOverrideDidEnd:(id)a0;
- (void)startAutomaticOverridingSystemBudgets:(unsigned long long)a0;
- (void)startOverridingSystemBudgets:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)a0;
- (void)stopAutomaticOverridingSystemBudgets:(unsigned long long)a0;
- (void)stopOverridingSystemBudgets:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)a0;
- (void)updateDiskPressureState;
- (void)watcher:(id)a0 stateDidChangeToNetworkState:(id)a1;

@end
