@class NSMutableDictionary, NSDictionary, NSString, ACAccountStore, ACAccount;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSDictionary *currentICloudAccountState;
@property (retain, nonatomic) NSMutableDictionary *accountByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *accountIsManagedByIdentifier;
@property (nonatomic, getter=isPrimaryICloudACAccountValid) BOOL primaryICloudACAccountValid;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (readonly, nonatomic) BOOL primaryICloudAccountEnabled;
@property (readonly, nonatomic) BOOL didChooseToMigratePrimaryICloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerStateHandler;

- (void)updateICloudACAccountFromStore;
- (void)accountStoreDidChange:(id)a0;
- (id)applicationDocumentsURLForAccountIdentifier:(id)a0;
- (id)applicationDataContainerURLForAccountIdentifier:(id)a0;
- (id)iCloudACAccountWithIdentifier:(id)a0;
- (id)allICloudACAccounts;
- (void)invalidateCache;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasSyncingAccount;
- (void)internalInvalidatePrimaryICloudACAccount;
- (BOOL)isManagedACAccountWithIdentifier:(id)a0;
- (id)init;
- (void)performBlockInPersonaContext:(id /* block */)a0 forAccountIdentifier:(id)a1;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)a0;
- (void)dealloc;
- (void)createDirectoryIfNecessaryUsingURL:(id)a0;

@end
