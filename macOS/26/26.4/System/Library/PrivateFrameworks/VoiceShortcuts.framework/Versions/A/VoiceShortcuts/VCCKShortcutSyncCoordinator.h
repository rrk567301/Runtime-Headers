@class VCCKShortcutSyncService, NSString, CKRecordID, CKContainer, VCCKApplicationStateObserver, NSObject, NSUserDefaults, WFCloudKitSyncEventLogger;
@protocol WFDatabaseProvider, OS_nw_path_monitor, OS_dispatch_queue, VCDaemonTaskScheduler;

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) id<VCDaemonTaskScheduler> daemonTaskScheduler;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) struct __CTServerConnection { } *telephonyConnection;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) long long accountStatus;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (readonly, nonatomic) NSUserDefaults *appleAccountUserDefaults;
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (readonly, nonatomic) WFCloudKitSyncEventLogger *logger;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCCKShortcutSyncService *currentSyncService;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleAccountChangedNotification:(id)a0;
- (void)start;
- (void)setupPathMonitor;
- (void)dealloc;
- (void)stopObservingReachability;
- (void)handleCloudKitSyncEnabledChange;
- (BOOL)checkIfExistingCoherenceSyncRecordsArePresent;
- (BOOL)containerContainsRecordOfType:(id)a0;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)handleWalrusStatusDidChange;
- (id)initWithDatabaseProvider:(id)a0 daemonTaskScheduler:(id)a1;
- (void)migrateToCoherenceSyncIfPossible:(id)a0;
- (BOOL)recordsContainIncompatibleDeviceForCoherenceSyncMigration:(id)a0;
- (void)removeAndResetCurrentSyncServiceWithDatabase:(id)a0 reason:(id)a1;
- (void)startObservingAccountChanges;
- (void)startObservingApplicationVisibility;
- (void)startObservingDataUsagePermission;
- (void)startObservingReachability;
- (void)startObservingUserDefaults;
- (void)stopObservingAccountChanges;
- (void)stopObservingApplicationVisibility;
- (void)stopObservingDataUsagePermission;
- (void)stopObservingUserDefaults;
- (void)updateAccountStatusAndMetadata;
- (void)updateCurrentSyncService;

@end
