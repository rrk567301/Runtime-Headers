@class IMCloudKitSyncState, NSTimer, IMCloudKitSyncProgress, IMWeakReferenceCollection, IMEventNotificationManager;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject

@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property (retain) IMEventNotificationManager *notificationManager;
@property (weak) NSTimer *fetchStatsTimer;
@property (retain) IMCloudKitSyncState *previousState;
@property (retain) IMCloudKitSyncProgress *progressToSend;
@property (weak) id<IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider;
@property BOOL didPromptForCloudKitSync;
@property double progressPollingInterval;
@property (readonly) IMCloudKitSyncState *syncState;

+ (id)sharedInstance;
+ (id)logHandle;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)logHandle;
- (void)performAdditionalStorageRequiredCheck;
- (void)fetchSyncStateStatistics;
- (id)cloudKitHooks;
- (void)_syncStateDidChange:(id)a0;
- (void)_timerExpiredForSyncStatsFetching:(id)a0;
- (void)_sendProgressToEventListenersDeferred;
- (void)addEventHandler:(id)a0;
- (void)removeEventHandler:(id)a0;
- (void)visitEventHandlers:(id /* block */)a0;
- (id)syncStateWithDictionary:(id)a0;
- (void)_sendSyncStateChangedEventToEventListeners:(id)a0;
- (void)fetchSyncState;
- (void)fetchSyncStateAfterFetchingAccountStatus;
- (void)fetchSyncStateWithCompletion:(id /* block */)a0;
- (void)fetchRampStateWithCompletion:(id /* block */)a0;
- (void)fetchSyncStateAfterClearingErrors;
- (void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)setCloudKitSyncEnabled:(BOOL)a0;
- (void)setCloudKitSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)accountHasiMessageEnabled;
- (void)startPeriodicSync;
- (void)startInitialSync;
- (void)disableAllSyncEnabledCloudKitDevices;
- (void)_fetchSyncStateStatistics:(id /* block */)a0;
- (void)_sendSyncStatisticsToEventHandlers:(id)a0 error:(id)a1;
- (void)fetchSyncStateStatisticsWithCompletion:(id /* block */)a0;
- (void)_cancelStatsFetchingTimer;
- (BOOL)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (double)progressBroadcastDelay;
- (void)_sendProgressToEventListeners:(id)a0;
- (void)_sendHiddenProgressToEventListeners;
- (void)_updateProgressWithState:(id)a0;
- (void)fetchSyncDebuggingInfo:(id)a0;

@end
