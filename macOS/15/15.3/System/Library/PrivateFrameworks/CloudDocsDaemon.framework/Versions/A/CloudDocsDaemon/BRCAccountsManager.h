@class BRCBarrier, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate> {
    NSMutableDictionary *_versionsProvidersByVolumeID;
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_maintainFPDomainsQueue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
    BOOL _maintainedExistingFPDomains;
    NSMutableArray *_accountsListChangeHandlers;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly, nonatomic) BRCBarrier *accountsLoadingBarrier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)getQueue;
- (id)accountForCurrentPersona;
- (id)accountHandlerForCurrentPersona;
- (id)_createAccountHandlerForAccountID:(id)a0;
- (id)_getEnterpriseProviderManager;
- (id)_getPrimaryProviderManager;
- (id)_keepDataLocalOnSignOutDefaultsKeyForCurrentPersona;
- (void)_maintainExistingFileProviderDomainsIfNeededWithAccounts:(id)a0;
- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (BOOL)_readkeepDataLocalOnSignOutForCurrentPersona;
- (void)_scheduleExistingFileProviderDomainsMaintenanceWithAccounts:(id)a0;
- (BOOL)_waitUntilFileProviderIsReady:(id *)a0;
- (id)accountForPersona:(id)a0;
- (void)accountHandler:(id)a0 didChangeSessionTo:(id)a1;
- (void)accountHandler:(id)a0 willChangeSessionFrom:(id)a1;
- (id)accountHandlerForACAccountID:(id)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)getMaintainFPDomainsQueue;
- (id)getOrCreateAccountHandlerForACAccount:(id)a0;
- (void)keepDataLocalOnSignOutForCurrentPersona:(BOOL)a0;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (id)versionsProviderForVolume:(id)a0;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;

@end
