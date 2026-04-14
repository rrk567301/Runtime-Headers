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

- (void)keepDataLocalOnSignOutForCurrentPersona:(BOOL)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (id)_getPrimaryProviderManager;
- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (void)loadAccounts;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (id)getMaintainFPDomainsQueue;
- (BOOL)_readkeepDataLocalOnSignOutForCurrentPersona;
- (id)_createAccountHandlerForAccountID:(id)a0;
- (id)getQueue;
- (id)init;
- (BOOL)_waitUntilFileProviderIsReady:(id *)a0;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (id)accountForCurrentPersona;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (BOOL)_cleanupAccountSupportDataWithPersona:(id)a0;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;
- (id)accountForPersona:(id)a0;
- (id)_getEnterpriseProviderManager;
- (id)getOrCreateAccountHandlerForACAccount:(id)a0;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)a0;
- (void).cxx_destruct;
- (id)accountHandlerForCurrentPersona;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)a0;

@end
