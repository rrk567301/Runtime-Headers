@class NEHotspotAuthenticationProviderHost, NSString, NSArray, NSXPCInterface, NEConfiguration, NSObject, NEProcessIdentity, NEHotspotEvaluationProviderHost;
@protocol OS_dispatch_queue, NEPluginManagerObjectFactory;

@interface NEAgentHotspotExtension : NSObject <NEAgentSessionDelegate, NEHotspotPluginDriver, NEExtensionBaseHostDelegate> {
    BOOL _appsUpdateStarted;
    BOOL _appsUpdateEnding;
    int _sessionrType;
    id<NEPluginManagerObjectFactory> _managerObjectFactory;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_pluginType;
    NSString *_extensionIdentifier;
    NSXPCInterface *_managerProtocol;
    NEConfiguration *_configuration;
    NEProcessIdentity *_extensionProcessIdentity;
    NSArray *_extensionUUIDs;
    NEHotspotEvaluationProviderHost *_hostForEvaluationProvider;
    NEHotspotAuthenticationProviderHost *_hostForAuthenticationProvider;
}

@property (readonly, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)cancelWithError:(id)a0;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)stopWithReason:(int)a0;
- (void)handleAppsUninstalled:(id)a0;
- (void)handleAppsUpdateBegins:(id)a0;
- (void)handleAppsUpdateEnding:(id)a0;
- (void)handleAppsUpdateEnds:(id)a0;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)a0;
- (void)handleInitWithCompletionHandler:(id /* block */)a0;
- (void)handleXPCError;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginEndpoint:(id)a2 pluginProcessIdentity:(id)a3 queue:(id)a4 factory:(id)a5;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginInfo:(id)a2 queue:(id)a3 factory:(id)a4;
- (void)startAuthenticationProvider;
- (void)startEvaluationProvider;
- (void)startWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)wakeup;

@end
