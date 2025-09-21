@class NSMutableDictionary, NSDictionary, NSString, ACAccountStore, ACAccount;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSDictionary *currentICloudAccountState;
@property (retain, nonatomic) NSMutableDictionary *accountByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *accountIsManagedByIdentifier;
@property (nonatomic, getter=isPrimaryICloudACAccountValid) char primaryICloudACAccountValid;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (readonly, nonatomic) char primaryICloudAccountEnabled;
@property (readonly, nonatomic) char didChooseToMigratePrimaryICloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerStateHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)accountStoreDidChange:(id)a0;
- (id)initForObservingAccountStoreChanges:(char)a0;
- (id)allICloudACAccounts;
- (id)applicationDataContainerURLForAccountIdentifier:(id)a0;
- (id)applicationDocumentsURLForAccountIdentifier:(id)a0;
- (char)hasSyncingAccount;
- (id)iCloudACAccountWithIdentifier:(id)a0;
- (void)performBlockInPersonaContext:(id /* block */)a0 forAccountIdentifier:(id)a1;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)a0;
- (void)createDirectoryIfNecessaryUsingURL:(id)a0;
- (void)internalInvalidatePrimaryICloudACAccount;
- (char)isManagedACAccountWithIdentifier:(id)a0;
- (void)updateICloudACAccountFromStore;

@end
