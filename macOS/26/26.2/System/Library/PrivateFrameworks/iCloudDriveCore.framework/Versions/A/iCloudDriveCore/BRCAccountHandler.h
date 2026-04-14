@class BRCBarrier, NSString, BRCAccountSession, NSMutableDictionary, NSError, NSObject, BRDSIDString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCAccountHandler : NSObject {
    BOOL _startedLoading;
    NSString *_ubiquityTokenSalt;
    BRCAccountSession *_loadingSession;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
    BRCBarrier *_accountLoadingBarrier;
}

@property (readonly, nonatomic) BOOL finishedLoading;
@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (readonly, nonatomic) NSString *acAccountID;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *accountPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (retain, nonatomic) NSError *loggedOutError;

+ (void)_migrateAccountIfNecessaryForAccountDSID:(id)a0;
+ (id)currentiCloudAccount;
+ (id)currentiCloudAccountID;

- (BOOL)_shouldResetLocalData:(id)a0;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (void)reloadSyncedFolderPolicies;
- (BOOL)destroySessionSynchronously;
- (void)__destroySession;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)setDBAccountDSID:(id)a0;
- (void)handleiCloudDesktopSettingsChangeWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)_updateAccountToDSID:(id)a0;
- (void).cxx_destruct;
- (void)_handleAccountDidChange;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (unsigned char)_tryToOpenSession:(id)a0 error:(id *)a1;
- (BOOL)_waitForSessionLoadingWhenNowStarting:(BOOL)a0;
- (id)waitForSessionDBLoadingBarrier;
- (BOOL)_loadOnDiskAccountSessionSecondTry:(id)a0 prevError:(id)a1;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (BOOL)handleDiskSpaceAndLoadAccountIfNeeded;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)_handleAccountWillChange;
- (void)jetsamCloudDocsApps;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_destroyCurrentSessionSynchronously;
- (id)ubiquityTokenSalt;
- (BOOL)waitForSessionLoading;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (BOOL)destroyCurrentAccountSynchronously;
- (BOOL)_shouldRetryOpenSession:(unsigned char)a0;
- (id)initWithACAccountID:(id)a0;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (unsigned char)_handleOpenError:(id)a0;
- (void)dealloc;

@end
