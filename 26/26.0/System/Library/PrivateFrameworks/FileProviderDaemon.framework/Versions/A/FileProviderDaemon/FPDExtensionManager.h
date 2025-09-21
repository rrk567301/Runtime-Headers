@class FPDServer, NSString, FPDPushConnection, NSSet, NSMutableDictionary, NSObject, NSMapTable, LSObserver;
@protocol OS_dispatch_queue;

@interface FPDExtensionManager : NSObject <LSObserverDelegate> {
    NSMutableDictionary *_providersByIdentifier;
    _Atomic BOOL _updating;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _matchingContext;
    LSObserver *_observer;
    NSSet *_providerUUIDs;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
    NSMutableDictionary *_syncPausedItemsDictionary;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;
@property (readonly, nonatomic) BOOL updating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alternateContentsURLForItemID:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (void)_updateProviderListForMatchingExtensionRecords:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (id)syncPausedBundleIDForItemID:(id)a0;
- (void)updateProviderOnDisappearingVolume:(id)a0 reason:(id)a1;
- (void)_startLSObserver;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (void)_loadAlternateContentsDictionary;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)extensionTypes;
- (void)garbageCollectOnFirstLaunch;
- (id)domainForActionOperationLocator:(id)a0;
- (void)handleAllExtensionsStarted:(id)a0;
- (id)domainsForAppBundleIdentifier:(id)a0;
- (id)clouddocsExtensionIdentifier;
- (void)removePausedSyncItemID:(id)a0 forBundleID:(id)a1;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (id)syncPausedFilesForBundleID:(id)a0;
- (id)_deserializedPausedSyncItemDictionary;
- (id)providerWithIdentifier:(id)a0 reason:(unsigned long long *)a1;
- (void)setPausedSyncItemID:(id)a0 forBundleID:(id)a1;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (id)allProviders;
- (id)providerDomainsByID;
- (void)_serializePausedSyncItemsDictionary:(id)a0;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (id)providerWithIdentifier:(id)a0 checkInvalidation:(BOOL)a1 reason:(unsigned long long *)a2;
- (id)extensionsByID:(id)a0;
- (void)observerDidObserveDatabaseChange:(id)a0;
- (void)synchronousProviderUpdate:(BOOL)a0;
- (id)domainFromItemID:(id)a0 checkInvalidation:(BOOL)a1 reason:(unsigned long long *)a2;
- (void)loadProvidersAndMonitor;
- (void)updateProviderOnAppearingVolume:(id)a0;
- (void)_updateProviderListForFilteredFPDExtensions:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (void)afterFirstDiscovery;
- (id)nonEvictableSizeByProviderDomain;
- (id)uniquedExtensions:(id)a0;
- (void)_loadPausedSyncItemsDictionary;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (void)purge:(id)a0;
- (id)domainFromItemID:(id)a0 reason:(unsigned long long *)a1;
- (id)extensionPointRecords;
- (void)forceSynchronousProviderUpdate;
- (id)domainWithID:(id)a0 reason:(unsigned long long *)a1;
- (void)updateProvidersIfNecessary;
- (void).cxx_destruct;
- (id)domainForURL:(id)a0 reason:(unsigned long long *)a1;
- (id)_deserializedAlternateContentsDictionary;

@end
