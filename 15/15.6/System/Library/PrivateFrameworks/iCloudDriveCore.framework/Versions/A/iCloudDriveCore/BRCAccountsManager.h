@class NSObject, NSMutableDictionary, BRCBarrier;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_maintainFPDomainsQueue;
    char _loadAccountsRequested;
    char _finishedLoadingAccounts;
    char _maintainedExistingFPDomains;
}

@property (readonly, nonatomic) char isInSyncBubble;
@property (readonly, nonatomic) BRCBarrier *accountsLoadingBarrier;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)getQueue;
- (id)accountForCurrentPersona;
- (id)accountHandlerForCurrentPersona;
- (char)_cleanupAccountSupportDataWithPersona:(id)a0;
- (id)_createAccountHandlerForAccountID:(id)a0;
- (id)_getEnterpriseProviderManager;
- (id)_getPrimaryProviderManager;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)a0;
- (char)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (char)_readkeepDataLocalOnSignOutForCurrentPersona;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)a0;
- (char)_waitUntilFileProviderIsReady:(id *)a0;
- (id)accountForPersona:(id)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (char)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (char)destroySessionWithACAccountID:(id)a0;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)getMaintainFPDomainsQueue;
- (id)getOrCreateAccountHandlerForACAccount:(id)a0;
- (void)keepDataLocalOnSignOutForCurrentPersona:(char)a0;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (char)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (char)waitForInitialAccountLoadingSynchronouslyIfPossible;

@end
