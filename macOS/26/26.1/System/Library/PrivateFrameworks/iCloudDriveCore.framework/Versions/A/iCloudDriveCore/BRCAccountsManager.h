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

- (void)loadAccounts;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (BOOL)_readkeepDataLocalOnSignOutForCurrentPersona;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)getOrCreateAccountHandlerForACAccount:(id)a0;
- (id)accountHandlerForCurrentPersona;
- (id)getQueue;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)a0;
- (id)_getPrimaryProviderManager;
- (id)_createAccountHandlerForAccountID:(id)a0;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (id)accountForPersona:(id)a0;
- (void).cxx_destruct;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)a0;
- (void)keepDataLocalOnSignOutForCurrentPersona:(BOOL)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (BOOL)_cleanupAccountSupportDataWithPersona:(id)a0;
- (id)getMaintainFPDomainsQueue;
- (id)_getEnterpriseProviderManager;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (id)accountForCurrentPersona;
- (BOOL)_waitUntilFileProviderIsReady:(id *)a0;
- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (id)init;

@end
