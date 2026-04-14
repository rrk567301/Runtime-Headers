@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate, BRCCiconiaStatusProvider> {
    NSMutableDictionary *_versionsProvidersByVolumeID;
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
    NSMutableArray *_accountsListChangeHandlers;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)accountForCurrentPersona;
- (void)performWhenAccountsListChanges:(id /* block */)a0;
- (id)accountHandlerForCurrentPersona;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)a0;
- (BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)a0 withError:(id *)a1;
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
- (id)getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)loadAccounts;
- (void)notifyAccountsListChanged;
- (id)personaIdentifierForACAccountID:(id)a0;
- (BOOL)shouldLastCiconiaRunConsideredAsSuccessForFPFSMigrationRollupForAllAccounts;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (id)versionsProviderForVolume:(id)a0;
- (BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)a0;
- (BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;

@end
