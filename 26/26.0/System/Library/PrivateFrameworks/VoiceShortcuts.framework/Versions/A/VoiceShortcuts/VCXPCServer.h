@class SwiftVCDaemonXPCEventHandler, NSXPCInterface, WFTopHitsAppShortcutsUpdater, NSXPCListenerEndpoint, NSString, WFWorkflowRunCoordinator, WFContextualActionSpotlightSyncService, WFTriggerManager, WFTriggerRegistrar, NSXPCListener, VCVoiceShortcutManager;
@protocol WFDatabaseProvider, VCSyncDataEndpoint;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>

@property (readonly, nonatomic) BOOL skipEntitlementsCheck;
@property (readonly, nonatomic) NSXPCInterface *xpcInterface;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) WFTopHitsAppShortcutsUpdater *appShortcutsUpdater;
@property (readonly, nonatomic) WFContextualActionSpotlightSyncService *contextualActionSyncService;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0 triggerRegistrar:(id)a1 syncDataEndpoint:(id)a2 runCoordinator:(id)a3 eventHandler:(id)a4 appShortcutsUpdater:(id)a5 contextualActionSyncService:(id)a6;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)a0;
- (id)initWithXPCListener:(id)a0 databaseProvider:(id)a1 triggerRegistrar:(id)a2 syncDataEndpoint:(id)a3 runCoordinator:(id)a4 eventHandler:(id)a5 appShortcutsUpdater:(id)a6 contextualActionSyncService:(id)a7;

@end
