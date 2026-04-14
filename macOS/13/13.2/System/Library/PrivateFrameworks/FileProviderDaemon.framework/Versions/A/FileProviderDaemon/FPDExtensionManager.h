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
- (id)providerDomainsByID;
- (void)purge:(id)a0;
- (id)_matchingAttributes;
- (id)providerWithIdentifier:(id)a0;
- (id)domainForURL:(id)a0;
- (void)accountsChanged:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (void)afterFirstDiscovery;
- (void)_updateWithMatchingExtensions:(id)a0;
- (void)loadProvidersAndMonitor;
- (void)forceSynchronousProviderUpdate;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)extensionsByID:(id)a0;
- (id)uniquedExtensions:(id)a0;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)nonEvictableSizeByProviderDomain;
- (id)domainWithID:(id)a0;
- (id)domainFromItemID:(id)a0;
- (id)_domainForURL:(id)a0;
- (id)domainForActionOperationLocator:(id)a0;
- (id)domainsForAppBundleIdentifier:(id)a0;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (id)alternateContentsURLForItemID:(id)a0;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (void)_loadAlternateContentsDictionary;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (id)allProviders;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)clouddocsExtensionIdentifier;

@end
