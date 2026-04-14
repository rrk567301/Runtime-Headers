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

- (void)invalidateCache;
- (id)allICloudACAccounts;
- (void)accountStoreDidChange:(id)a0;
- (BOOL)hasSyncingAccount;
- (BOOL)isManagedACAccountWithIdentifier:(id)a0;
- (id)iCloudACAccountWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)applicationDataContainerURLForAccountIdentifier:(id)a0;
- (void)performBlockInPersonaContext:(id /* block */)a0 forAccountIdentifier:(id)a1;
- (id)applicationDocumentsURLForAccountIdentifier:(id)a0;
- (id)init;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)a0;
- (void)createDirectoryIfNecessaryUsingURL:(id)a0;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)updateICloudACAccountFromStore;
- (void)dealloc;
- (void)internalInvalidatePrimaryICloudACAccount;

@end
