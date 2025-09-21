@class HKObserverSet, NSString, NSUUID, HKTaskServerProxyProvider;
@protocol HKOntologyStoreObserver;

@interface HKOntologyStore : NSObject <_HKXPCExportable, HKOntologyStoreClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKOntologyStoreObserver> *_observers;
}

@property (copy, nonatomic) id /* block */ unitTesting_didChangeObserverRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)init;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (void)_callUnitTestHookObserving:(char)a0 success:(char)a1 error:(id)a2;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversAboutReconnect;
- (void)_observeOntologyStoreChanges:(char)a0 completion:(id /* block */)a1;
- (void)_registerFirstObserver;
- (char)_synchronouslyRegisterToObserveOntologyStoreChanges:(id *)a0;
- (void)_unregisterLastObserver;
- (void)client_didImportEntry:(id)a0;
- (void)client_didStageEntry:(id)a0;
- (void)downloadRequiredShardsWithCompletion:(id /* block */)a0;
- (void)importRequiredShardsWithCompletion:(id /* block */)a0;
- (void)insertEntries:(id)a0 completion:(id /* block */)a1;
- (void)markShardsWithIdentifiers:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)ontologyServerURLWithCompletion:(id /* block */)a0;
- (void)ontologyShardRegistryEntriesWithCompletion:(id /* block */)a0;
- (void)pruneOntologyWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)requestGatedOntologyUpdateWithCompletion:(id /* block */)a0;
- (void)setOntologyServerURL:(id)a0 completion:(id /* block */)a1;
- (void)shardRequirementStatusesWithCompletion:(id /* block */)a0;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)updateOntologyForReason:(long long)a0 completion:(id /* block */)a1;
- (void)updateShardRegistryWithCompletion:(id /* block */)a0;

@end
