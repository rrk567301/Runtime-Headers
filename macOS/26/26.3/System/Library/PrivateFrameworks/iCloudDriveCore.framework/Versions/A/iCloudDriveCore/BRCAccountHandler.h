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

- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (BOOL)setDBAccountDSID:(id)a0;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (BOOL)destroyCurrentAccountSynchronously;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)_handleAccountWillChange;
- (BOOL)destroySessionSynchronously;
- (void)reloadSyncedFolderPolicies;
- (void)__destroySession;
- (void)handleiCloudDesktopSettingsChangeWithAttributes:(id)a0 completion:(id /* block */)a1;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (BOOL)_waitForSessionLoadingWhenNowStarting:(BOOL)a0;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (id)waitForSessionDBLoadingBarrier;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_shouldResetLocalData:(id)a0;
- (unsigned char)_handleOpenError:(id)a0;
- (void)jetsamCloudDocsApps;
- (id)ubiquityTokenSalt;
- (void).cxx_destruct;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (BOOL)_shouldRetryOpenSession:(unsigned char)a0;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)waitForSessionLoading;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)_destroyCurrentSessionSynchronously;
- (BOOL)handleDiskSpaceAndLoadAccountIfNeeded;
- (void)_handleAccountDidChange;
- (void)_updateAccountToDSID:(id)a0;
- (BOOL)_loadOnDiskAccountSessionSecondTry:(id)a0 prevError:(id)a1;
- (id)initWithACAccountID:(id)a0;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (void)markMigrationCompletedForDSID:(id)a0;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (unsigned char)_tryToOpenSession:(id)a0 error:(id *)a1;

@end
