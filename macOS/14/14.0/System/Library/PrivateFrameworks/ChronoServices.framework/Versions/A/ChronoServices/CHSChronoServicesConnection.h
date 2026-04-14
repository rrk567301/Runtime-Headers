@class CHSServerSubscription, NSSet, NSString, NSHashTable, NSMutableDictionary, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection *_queue_connection;
    BOOL _queue_connectionIsActive;
    NSHashTable *_queue_observers;
    NSMutableDictionary *_queue_widgetHostsByHostIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    int _serverStartupToken;
    BOOL _includeIntents;
    NSSet *_notQueue_subscriptions;
    CHSServerSubscription *_notQueue_extensionsSubscription;
    CHSServerSubscription *_notQueue_relevanceSubscription;
    CHSServerSubscription *_notQueue_remoteDevicesSubscription;
}

@property (readonly, nonatomic) NSSet *cachedExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_debugRestartServer;
+ (id)ncBridgeConnection;
+ (id)sharedInstanceNotIncludingIntents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_queue_removeClient:(id)a0;
- (id)allPairedDevices;
- (oneway void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)includesIntents;
- (oneway void)updateWidgetHostConfigurations:(id)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (id)_initWithMachServiceName:(id)a0 listenForReconnect:(BOOL)a1 includeIntents:(BOOL)a2;
- (void)_queue_addClient:(id)a0;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (void)_queue_notifyDevicesDidChange:(id)a0;
- (void)_queue_notifyExtensionsDidChange:(id)a0;
- (void)_queue_notifyRelevanceEntriesDidChange:(id)a0;
- (id)_queue_remoteTargetCreatingConnectionIfNecessary:(BOOL)a0;
- (id)_subscribeToExtensions;
- (id)_subscribeToRelevanceEntries;
- (id)_subscribeToRemoteDevices;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)a0 reason:(id)a1 error:(out id *)a2;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)a0;
- (oneway void)fetchDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)flushPowerlog;
- (oneway void)nearbyDevicesDidChange:(id)a0;
- (void)pairDevice:(id)a0 completion:(id /* block */)a1;
- (oneway void)performDescriptorDiscoveryForHost:(id)a0;
- (oneway void)reloadDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)reloadRemoteWidgetsWithError:(id *)a0;
- (BOOL)reloadTimeline:(id)a0 error:(id *)a1;
- (BOOL)remoteWidgetsEnabled;
- (oneway void)removeWidgetHost:(id)a0;
- (void)setIncludeIntents:(BOOL)a0;
- (id)subscribeToExtensions:(id *)a0 outExtensions:(id *)a1;
- (id)subscribeToRelevanceEntries:(id *)a0 outRelevanceEntries:(id *)a1;
- (id)subscribeToRemoteDevices:(id *)a0 outRemoteDevices:(id *)a1;
- (BOOL)toggleRemoteWidgetsEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)unpairDevice:(id)a0 error:(id *)a1;
- (oneway void)updateWidgetHostActivationState:(id)a0;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;
- (oneway void)widgetExtensionsDidChange:(id)a0;
- (oneway void)widgetRelevanceEntriesDidChange:(id)a0;

@end
