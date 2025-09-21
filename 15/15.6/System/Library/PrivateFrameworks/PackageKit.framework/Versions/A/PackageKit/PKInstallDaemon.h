@class NSXPCListener, NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKInstallDaemon : NSObject <PKInstallService, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSString *_connectionName;
    NSMutableDictionary *_tokenToInstallDictionary;
    NSMutableDictionary *_tokenToDoneBlockDictionary;
    NSMutableDictionary *_tokenToQualityOfServiceClassDictionary;
    id _currentToken;
    NSMutableArray *_tokenQueue;
    NSMutableDictionary *_validatedAuthorizations;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_queueQueue;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _daemonState;
    int _idleCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)allowedToLookupInstallDaemonsWithSystemDaemonLookup:(char)a0;
+ (char)doingRecursiveInstall;
+ (id)sharedServiceDaemon;

- (void)dealloc;
- (id)init;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_currentClients;
- (char)_isProvidingPrivilegeEscalation;
- (void)addToken:(id)a0 reply:(id /* block */)a1;
- (void)connectionEstablishedWithReply:(id /* block */)a0;
- (void)_attachToToken:(id)a0 withDoneBlock:(id /* block */)a1;
- (id)_descriptionForToken:(id)a0;
- (char)_evaluateSecurityOfRequest:(id)a0;
- (void)_installDidEnd;
- (void)_invokeDoneBlocksForToken:(id)a0;
- (void)_queueInstallationForToken:(id)a0 reply:(id /* block */)a1;
- (char)_requestHasValidAuthorization:(id)a0 allowInteraction:(char)a1;
- (char)_requestMeetsPolicyForInstallation:(id)a0 withError:(id *)a1;
- (void)_runIdleTasks;
- (char)_shouldOnlyInstallSystemSoftwareForRequest:(id)a0;
- (char)_validateSecurityForInstall:(id)a0 withError:(id *)a1;
- (void)adoptToken:(id)a0 reply:(id /* block */)a1;
- (void)currentStageStatusOfInstallRequest:(id)a0 calculatePurgeableSize:(char)a1 reply:(id /* block */)a2;
- (void)displayNamesForToken:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)a0 systemSandboxes:(char)a1;
- (void)install:(id)a0 didFailWithError:(id)a1;
- (void)installDidBegin:(id)a0;
- (void)installDidCancel:(id)a0;
- (void)installDidFinish:(id)a0;
- (void)installStatusForToken:(id)a0 reply:(id /* block */)a1;
- (void)installWillFinish:(id)a0;
- (void)operationControllerDidChangeInstallState:(int)a0 withSandbox:(id)a1;
- (long long)purgeableSpaceForOrphanedSandboxesOnVolume:(id)a0 performPurge:(char)a1;
- (void)registerAuthorizationFromInstallRequest:(id)a0 reply:(id /* block */)a1;
- (char)removeTokenIfPossible:(id)a0;
- (char)startListeningForConnectionsToService:(id)a0;
- (void)startNextInstallIfNeeded;
- (void)startPurgeOfSandboxesOnVolume:(id)a0 purgeAmountNeeded:(unsigned long long)a1 systemSandboxes:(char)a2 reply:(id /* block */)a3;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(char)a0 reply:(id /* block */)a1;
- (void)tokenForInstallRequest:(id)a0 reply:(id /* block */)a1;

@end
