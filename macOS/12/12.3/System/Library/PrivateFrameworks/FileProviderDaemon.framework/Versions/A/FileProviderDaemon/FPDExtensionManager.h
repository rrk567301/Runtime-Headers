@class NSMutableDictionary, NSMapTable, FPDServer, FPDPushConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id _matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;

- (void).cxx_destruct;
- (id)_matchingAttributes;
- (id)providerWithIdentifier:(id)a0;
- (id)providerDomainsByID;
- (id)domainForURL:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (void)loadProvidersAndMonitor;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)domainFromItemID:(id)a0;
- (id)domainWithID:(id)a0;
- (id)nonEvictableSizeByProviderDomain;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (void)forceSynchronousProviderUpdate;
- (id)clouddocsExtensionIdentifier;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (id)alternateContentsURLForItemID:(id)a0;
- (id)allProviders;
- (void)accountsChanged;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (void)_loadAlternateContentsDictionary;
- (void)_updateWithMatchingExtensions:(id)a0;
- (void)afterFirstDiscovery;
- (id)uniquedExtensions:(id)a0;
- (id)extensionsByID:(id)a0;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (id)domainForActionOperationLocator:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;

@end
