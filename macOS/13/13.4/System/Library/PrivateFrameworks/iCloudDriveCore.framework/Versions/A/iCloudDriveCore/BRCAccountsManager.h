@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)accountForCurrentPersona;
- (id)accountHandlerForCurrentPersona;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)a0;
- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
- (id)accountForPersona:(id)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)loadAccounts;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;

@end
