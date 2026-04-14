@class FPDDomain, NSString, NSXPCConnection, FPDServer, FPDXPCDomainServicerLifetimeExtender, NSObject, FPDProvider;
@protocol FPDExtensionSessionProtocol, OS_os_log, OS_os_transaction, OS_dispatch_queue, FPProgressProtocol;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) id<FPDExtensionSessionProtocol> sessionOrNil;
@property (retain, nonatomic) id<FPProgressProtocol> uploadProxy;
@property (retain, nonatomic) id<FPProgressProtocol> downloadProxy;

- (void)invalidate;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)releaseKnownFolders:(unsigned long long)a0 localizedReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)_unregisterLifetimeExtension;
- (void)requestDiagnosticCollectionForItemWithIdentifier:(id)a0 errorReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)startAccessingServiceWithName:(id)a0 itemID:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToDownloadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForStabilizationWithMode:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (id)providerOrNilWithReason:(unsigned long long *)a0;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)claimKnownFolders:(id)a0 localizedReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 indexReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)stateDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)domainOrNil:(unsigned long long *)a0;
- (void)runTestingOperations:(id)a0 completionHandler:(id /* block */)a1;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)startExtendingLifetime;
- (void)setDomainEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)__providerIfExists;
- (void)dealloc;
- (id)initWithServer:(id)a0 providerDomainID:(id)a1 domain:(id)a2 connection:(id)a3;
- (int)pid;
- (id)newFileProviderProxy;
- (void)getDiagnosticAttributesForItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopExtendingLifetime;
- (void)_registerLifetimeExtension;
- (void)materializeItemWithIdentifier:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToUploadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;

@end
