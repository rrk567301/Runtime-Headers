@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (weak) PKDiscoveryDriver *wdriver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)update;
- (void)pluginsDidInstall:(id)a0;
- (void)pluginsDidUninstall:(id)a0;
- (id)initWithDriver:(id)a0;
- (void)stopUpdates;
- (void)updateWithUninstalledProxies:(id)a0;

@end
