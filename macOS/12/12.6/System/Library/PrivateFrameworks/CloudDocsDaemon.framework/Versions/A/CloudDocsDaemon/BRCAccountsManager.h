@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate> {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSMutableDictionary *_versionsProvidersByVolumeID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _finishedLoadingAccounts;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)accountHandlerForCurrentPersona;
- (id)versionsProviderForVolume:(id)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (id)accountHandlerForACAccountID:(id)a0;
- (id)getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)accountHandler:(id)a0 willChangeSessionFrom:(id)a1;
- (void)accountHandler:(id)a0 didChangeSessionTo:(id)a1;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)loadAccounts;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)_garbageCollectOldDomains;
- (id)accountForCurrentPersona;
- (void)waitForInitialAccountLoadingSynchronously;
- (void)waitForInitialAccountLoadingWithCompletionHandler:(id /* block */)a0;
- (id)waitForAccountLoadingOfDomain:(id)a0;
- (void)waitForAccountLoadingSynchronously:(id)a0;
- (id)accountForPersona:(id)a0;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (void)signalUserDefaultsRefresh;

@end
