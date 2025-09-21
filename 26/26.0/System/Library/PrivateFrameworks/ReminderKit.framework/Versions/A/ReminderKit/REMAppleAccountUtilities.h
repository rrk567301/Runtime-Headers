@class NSMutableDictionary, NSArray, ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSMutableDictionary *unsafeUntilSystemReady_parentICloudACAccountIdentifierMap;
@property (nonatomic) BOOL cachedICloudACAccountsAreValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (retain, nonatomic) ACAccount *_debug_fullICloudACAccount;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) NSArray *unsafeUntilSystemReady_allICloudACAccounts;

+ (id)sharedInstance;
+ (id)accountDescriptionWithACAccount:(id)a0;

- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;
- (id)accessQueue;
- (id)_cachedDisplayICloudACAccountWithIdentifier:(id)a0;
- (id)unsafeUntilSystemReady_iCloudAccountCalDavServiceWithAccountID:(id)a0;
- (void)performBlockInPersonaContextForAccountIdentifier:(id)a0 block:(id /* block */)a1;
- (void)dealloc;
- (id)unsafeUntilSystemReady_icloudACAccountMatchingAccountIdentifier:(id)a0;
- (void)_updateCachedICloudACAccounts;
- (void)_setNonPrimaryICloudACAccount:(id)a0;
- (void)_setPrimaryICloudACAccount:(id)a0;
- (id)unsafeUntilSystemReady_displayedHostnameOfICloudACAccountWithAccountIdentifier:(id)a0;
- (id)init;
- (id)unsafeUntilSystemReady_allCloudKitRemindersEnabledICloudACAccounts;
- (id)currentPersonaUserPersonaUniqueString;
- (void)invalidateICloudACAccounts;
- (void)accountStoreDidChange:(id)a0;
- (BOOL)isCurrentPersonaDataSeparated;
- (void)_invalidateCachedICloudACAccounts;
- (void).cxx_destruct;

@end
