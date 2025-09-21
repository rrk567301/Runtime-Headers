@interface IMDMessagesSyncCoordinatorInternal : NSObject

+ (char)isSyncing;
+ (void)clearLocalCountsWhenSafe;
+ (void)clearSyncStoreWhenSafeWithCompletionHandler:(void (^)(void))a0;
+ (char)configureWith:(id)a0 error:(id *)a1;
+ (long long)currentTelemetrySyncVersion;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)a0;
+ (id)initiateSyncFor:(id)a0 delegate:(id)a1 forceRunNow:(char)a2 error:(id *)a3;
+ (id)readServerCountsFromDefaults;
+ (void)registerWithBackupController:(id)a0;
+ (void)registerWithErrorAnalyzer:(id)a0;
+ (void)registerWithNotifier:(id)a0;
+ (void)registerWithPreReqsVerifier:(id)a0;
+ (void)registerWithStore:(id)a0 asType:(long long)a1;
+ (void)registerWithSyncStateManager:(id)a0;
+ (void)registerWithSyncTokenStore:(id)a0;
+ (char)scheduleAttachmentAssetDownloadSyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)scheduleBackfillSyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)scheduleBackupSyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)schedulePeriodicSyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)scheduleTelemetrySyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)startInitialSyncWithDelegate:(id)a0 error:(id *)a1;
+ (char)startUserInitiatedSyncWithDelegate:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
