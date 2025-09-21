@class NSString, NSRecursiveLock, NSArray, NSURL, RTPersistenceStore, RTPersistenceContainer, NSMutableArray, NSPointerArray, NSManagedObjectModel;
@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;

@interface RTPersistenceManager : RTService <RTPersistenceContainerDelegate, RTPersistenceModelProvider, RTPersistenceContextDelegate, RTDiagnosticProvider> {
    NSURL *_modelsDirectory;
    NSURL *_storesDirectory;
    NSArray *_sortedModelNames;
    RTPersistenceStore *_stores[4];
    RTPersistenceContainer *_container;
    NSManagedObjectModel *_latestModel;
    NSRecursiveLock *_pointerArrayLock;
    NSRecursiveLock *_storesArrayLock;
    NSPointerArray *_outstandingContexts;
    NSMutableArray *_remoteServers;
}

@property unsigned long long availability;
@property (weak, nonatomic) id<RTPersistenceDelegate> delegate;
@property (weak, nonatomic) id<RTPersistenceMirroringDelegate> mirroringDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModelsDirectory;
+ (id)defaultStoresDirectory;
+ (id)protectedStoreFilesExtensions;
+ (unsigned long long)storeTypeForURL:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectContext;
- (void)setContainer:(id)a0;
- (id)URLForStoreType:(unsigned long long)a0;
- (char)_generateDiagnosticFilesAtURL:(id)a0 error:(id *)a1;
- (void)_onCoreDataResetSync:(id)a0;
- (char)_setupPersistenceContainers;
- (void)_setupRemoteStoreServers;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_updateAvailabilityAfterSetupAttemptWithAvailability:(unsigned long long)a0;
- (void)_updateStoreAvailability:(unsigned long long)a0;
- (void)container:(id)a0 failedToActivateRequestsQueue:(id)a1;
- (void)container:(id)a0 willActivateRequestsQueue:(id)a1;
- (unsigned long long)countOfPersistenceStores;
- (void)createManagedObjectContext:(id /* block */)a0;
- (id)historyTokenForStoreType:(unsigned long long)a0;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1;
- (char)initializeContainer;
- (char)initializePersistenceStores;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)latestModel;
- (void)mirroringDelegateSetupState:(id /* block */)a0;
- (long long)mirroringDelegateStateForStoreType:(unsigned long long)a0;
- (id)modelFollowingModel:(id)a0;
- (id)modelNamed:(id)a0;
- (void)onCoreDataResetSync:(id)a0;
- (id)outstandingContexts;
- (void)performExportMirroringRequest:(id /* block */)a0;
- (void)performExportMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)performImportMirroringRequest:(id /* block */)a0;
- (void)performImportMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)performMirroringRequestOfType:(long long)a0 qualityOfService:(long long)a1 handler:(id /* block */)a2;
- (void)performZoneResetMirroringRequest:(id /* block */)a0;
- (void)performZoneResetMirroringRequestWithQualityOfService:(long long)a0 handler:(id /* block */)a1;
- (void)persistenceContext:(id)a0 encounteredError:(id)a1;
- (char)persistenceContextPerformedSave:(id)a0 error:(id *)a1;
- (char)persistenceContextShouldExecute:(id)a0;
- (id)persistenceContextWithOptions:(unsigned long long)a0;
- (id)persistenceStoreConfigurations;
- (id)persistenceStoreForType:(unsigned long long)a0;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)setupPersistenceContainers:(id /* block */)a0;
- (id)sortedModelNames;
- (id)storeDescriptionForStoreWithType:(unsigned long long)a0;
- (void)tearDownPersistenceStack:(id /* block */)a0;
- (void)trackContext:(id)a0;
- (void)updateStoreAvailability:(unsigned long long)a0;
- (id)urlForModelWithName:(id)a0;
- (id)waitForPersistenceContext;

@end
