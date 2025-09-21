@class IMCloudKitSyncState, NSTimer, IMCloudKitSyncProgress, IMWeakReferenceCollection, IMEventNotificationManager;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject

@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property (retain) IMEventNotificationManager *notificationManager;
@property (weak) NSTimer *fetchStatsTimer;
@property (retain) IMCloudKitSyncState *previousState;
@property (retain) IMCloudKitSyncProgress *progressToSend;
@property (weak) id<IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider;
@property char didPromptForCloudKitSync;
@property double progressPollingInterval;
@property (readonly) IMCloudKitSyncState *syncState;

+ (id)sharedInstance;
+ (id)logHandle;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)logHandle;
- (void)fetchSyncStateStatistics;
- (void)performAdditionalStorageRequiredCheck;
- (void)startUserInitiatedSync;
- (void)_cancelStatsFetchingTimer;
- (void)_fetchSyncStateStatistics:(id /* block */)a0;
- (char)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgressToEventListeners;
- (void)_sendProgressToEventListeners:(id)a0;
- (void)_sendProgressToEventListenersDeferred;
- (void)_sendSyncStateChangedEventToEventListeners:(id)a0;
- (void)_sendSyncStatisticsToEventHandlers:(id)a0 error:(id)a1;
- (void)_syncStateDidChange:(id)a0;
- (void)_timerExpiredForSyncStatsFetching:(id)a0;
- (void)_updateProgressWithState:(id)a0;
- (char)accountHasiMessageEnabled;
- (void)addEventHandler:(id)a0;
- (id)cloudKitHooks;
- (void)disableAllSyncEnabledCloudKitDevices;
- (void)fetchRampStateWithCompletion:(id /* block */)a0;
- (void)fetchSyncDebuggingInfo:(id)a0;
- (void)fetchSyncState;
- (void)fetchSyncStateAfterClearingErrors;
- (void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(char)a0 completion:(id /* block */)a1;
- (void)fetchSyncStateAfterFetchingAccountStatus;
- (void)fetchSyncStateStatisticsWithCompletion:(id /* block */)a0;
- (void)fetchSyncStateWithCompletion:(id /* block */)a0;
- (double)progressBroadcastDelay;
- (void)removeEventHandler:(id)a0;
- (void)setCloudKitSyncEnabled:(char)a0;
- (void)setCloudKitSyncEnabled:(char)a0 withCompletion:(id /* block */)a1;
- (void)startInitialSync;
- (void)startPeriodicSync;
- (id)syncStateWithDictionary:(id)a0;
- (void)visitEventHandlers:(id /* block */)a0;

@end
