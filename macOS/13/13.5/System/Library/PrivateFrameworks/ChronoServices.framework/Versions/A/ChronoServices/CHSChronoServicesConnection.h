@class NSString, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSChronoServicesConnection : NSObject <CHSChronoWidgetServiceClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection *_queue_connection;
    BOOL _queue_connectionIsActive;
    NSMutableSet *_queue_clients;
    NSDictionary *_queue_lastDescriptorsByExtensionIdentifier;
    NSMutableDictionary *_queue_widgetConfigurationsByHostIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    int _serverStartupToken;
}

@property (readonly, nonatomic) NSDictionary *cachedDescriptorsByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_debugRestartServer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_queue_removeClient:(id)a0;
- (oneway void)removeWidgetHostWithIdentifier:(id)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (void)_queue_addClient:(id)a0;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (void)_queue_noteDescriptorsDidChange:(id)a0;
- (id)_queue_remoteTargetCreatingConnectionIfNecessary:(BOOL)a0;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)a0;
- (oneway void)cacheDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)descriptors:(id *)a0;
- (oneway void)flushPowerlog;
- (BOOL)reloadTimeline:(id)a0 error:(id *)a1;
- (oneway void)setWidgetConfiguration:(id)a0 forWidgetHostWithIdentifier:(id)a1;
- (oneway void)widgetDescriptorsDidChange:(id)a0;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;

@end
