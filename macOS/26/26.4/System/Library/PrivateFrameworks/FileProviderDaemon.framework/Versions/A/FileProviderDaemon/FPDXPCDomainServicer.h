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

- (id)initWithServer:(id)a0 providerDomainID:(id)a1 domain:(id)a2 connection:(id)a3;
- (void)stopExtendingLifetime;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToDownloadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)stateDirectoryWithCompletionHandler:(id /* block */)a0;
- (id)newFileProviderProxy;
- (void)requestDiagnosticCollectionForItemWithIdentifier:(id)a0 errorReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDomainEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)domainOrNil:(unsigned long long *)a0;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingServiceWithName:(id)a0 itemID:(id)a1 completionHandler:(id /* block */)a2;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)_registerLifetimeExtension;
- (void)releaseKnownFolders:(unsigned long long)a0 localizedReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForStabilizationWithMode:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)providerOrNilWithReason:(unsigned long long *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)__providerIfExists;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)claimKnownFolders:(id)a0 localizedReason:(id)a1 completionHandler:(id /* block */)a2;
- (void)_unregisterLifetimeExtension;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 indexReason:(long long)a1 completionHandler:(id /* block */)a2;
- (id)description;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)startExtendingLifetime;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)runTestingOperations:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)materializeItemWithIdentifier:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)subscribeToUploadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (int)pid;
- (void)getDiagnosticAttributesForItems:(id)a0 completionHandler:(id /* block */)a1;

@end
