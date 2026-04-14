@class NSObject, NSMutableDictionary, BRCBarrier;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_maintainFPDomainsQueue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
    BOOL _maintainedExistingFPDomains;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly, nonatomic) BRCBarrier *accountsLoadingBarrier;

+ (id)sharedManager;

- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (id)accountForPersona:(id)a0;
- (id)getOrCreateAccountHandlerForACAccount:(id)a0;
- (id)personaIdentifierForACAccountID:(id)a0;
- (id)_createAccountHandlerForAccountID:(id)a0;
- (id)init;
- (id)accountHandlerForACAccountID:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadAccounts;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (id)_getPrimaryProviderManager;
- (void)keepDataLocalOnSignOutForCurrentPersona:(BOOL)a0;
- (void).cxx_destruct;
- (id)_getEnterpriseProviderManager;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (id)accountHandlerForCurrentPersona;
- (id)accountForCurrentPersona;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)a0;
- (id)getMaintainFPDomainsQueue;
- (BOOL)_waitUntilFileProviderIsReady:(id *)a0;
- (id)getQueue;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (BOOL)_readkeepDataLocalOnSignOutForCurrentPersona;
- (BOOL)_cleanupAccountSupportDataWithPersona:(id)a0;

@end
