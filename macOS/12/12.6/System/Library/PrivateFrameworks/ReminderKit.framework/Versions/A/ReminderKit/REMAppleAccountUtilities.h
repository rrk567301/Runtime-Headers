@class ACAccountStore, ACAccount;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL primaryICloudACAccountIsValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) BOOL unsafeUntilSystemReady_primaryICloudAccountEnabled;

+ (id)sharedInstance;
+ (id)getAppleIDSession;
+ (id)accountDescriptionWithACAccount:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)accessQueue;
- (id)status;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)accountStoreDidChange:(id)a0;
- (void)internalInvalidatePrimaryICloudACAccount;
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
- (void)invalidatePrimaryICloudACAccount;
- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;
- (id)unsafeUntilSystemReady_primaryICloudAccountCalDavService;
- (void)_unsetMigrationFlagsWithACAccount:(id)a0 inStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setPrimaryICloudACAccount:(id)a0;

@end
