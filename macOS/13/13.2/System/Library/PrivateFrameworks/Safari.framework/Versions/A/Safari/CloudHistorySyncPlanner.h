@class NSTimer;
@protocol WBSCloudHistoryServiceProtocol;

@interface CloudHistorySyncPlanner : NSObject {
    id<WBSCloudHistoryServiceProtocol> _cloudHistory;
    BOOL _isCloudHistoryEnabled;
    BOOL _isMonitoringForTriggersAndSyncAttemptNotifications;
    NSTimer *_historyItemsAddedOrChangedIdleTimer;
    NSTimer *_historyItemsRemovedIdleTimer;
    BOOL _ignoresDisplaysDidSleepNotification;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _pendingCloudOperationSuddenTerminationDisabler;
    NSTimer *_saveChangesBeforeTerminationTimeoutTimer;
}

@property (readonly, nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;

+ (id)sharedPlanner;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_sync;
- (void)_cloudHistoryConfigurationChanged:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (void)_safariSyncStatusMayHaveChanged:(id)a0;
- (void)_resetCloudHistoryIfNecessary;
- (void)_cloudHistoryConfigurationDidFullyConfigure:(id)a0;
- (void)_historyItemsWereAddedOrChanged:(id)a0;
- (void)_systemWillSleep:(id)a0;
- (void)_displaysDidSleep:(id)a0;
- (void)_displaysDidWake:(id)a0;
- (void)_historyItemsWereAddedOrChangedTimerFired:(id)a0;
- (void)_historyItemsWereRemovedTimerFired:(id)a0;
- (void)_saveChangesBeforeTerminationTimerFired:(id)a0;
- (void)stopTryingToDownloadRemoteConfiguration;
- (void)syncOnAppStartup;
- (BOOL)_syncOnAppStartupIfReady;
- (void)_startMonitoringForTriggersAndSyncAttemptNotifications;
- (void)_stopMonitoringForTriggersAndSyncAttemptNotifications;
- (void)_saveChanges;
- (void)_cloudHistorySaveAttemptDidComplete:(id)a0;
- (void)_fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)a0;
- (void)_invalidateHistoryTimers;
- (BOOL)shouldDeferTerminationToSaveChangesToCloud;
- (void)savePendingChangesToCloudAndTerminate;
- (BOOL)_isDeferringTerminationToSaveChanges;
- (void)_saveAttemptDuringTerminationDidFinish;
- (void)syncForDebugPurposesBypassingThrottler:(BOOL)a0;

@end
