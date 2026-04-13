@class NSError, NSString, NSHashTable, NSMutableDictionary, BRCAccountSession, BRDSIDString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface BRCAccountHandler : NSObject {
    NSString *_ubiquityTokenSalt;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableArray *_accountsNeedingAddDomain;
    NSMutableDictionary *_syncPolicyByFolderType;
    NSHashTable *_delegates;
}

@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (readonly, nonatomic) NSString *acAccountID;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) NSString *accountPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop;
@property (retain, nonatomic) NSError *loggedOutError;

+ (void)_migrateAccountIfNecessaryForAccountDSID:(id)a0;
+ (id)currentiCloudAccount;
+ (id)currentiCloudAccountID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
- (void)setMigrationStatus:(char)a0 forDSID:(id)a1 shouldUpdateAccount:(BOOL)a2 shouldPostAccountChangedNotification:(BOOL)a3 completion:(id /* block */)a4;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)a0;
- (BOOL)setDBAccountDSID:(id)a0;
- (BOOL)_loadOnDiskAccountSessionWithError:(id *)a0;
- (void)addFileProviderDomainForAccount:(id)a0 error:(id *)a1;
- (void)jetsamCloudDocsApps;
- (void)__destroySessionWithIntents:(id)a0;
- (void)reloadSyncedFolderPolicies;
- (id)ubiquityTokenSalt;
- (void)_destroyCurrentSessionSynchronously;
- (BOOL)_createCurrentAccountSessionWithID:(id)a0 error:(id *)a1;
- (void)_handleAccountWillChange;
- (BOOL)destroyCurrentAccountSynchronously;
- (void)_handleAccountDidChange;
- (void)_updateAccountToDSID:(id)a0;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)a0;
- (void)setSyncPolicy:(long long)a0 forSyncedFolderType:(unsigned long long)a1;
- (id)initWithACAccountID:(id)a0;
- (void)startAndLoadAccountSynchronously:(id)a0;
- (BOOL)checkEnoughDiskSpaceToBeFunctional;
- (BOOL)destroySessionSynchronously;
- (BOOL)createAccountSessionWithDSID:(id)a0 error:(id *)a1;
- (void)markMigrationCompletedForDSID:(id)a0;

@end
