@class NEFilterManager, NSString, NSXPCConnection, NEDNSSettingsManager, NEDNSProxyManager, NSMutableArray, NSXPCListener, NEVPNManager;
@protocol NEConfigurationCommandHandling;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {
    BOOL _isServerMode;
    NSXPCListener *_listener;
    NEVPNManager *_currentManager;
    NEFilterManager *_filterManager;
    NEDNSProxyManager *_dnsProxyManager;
    NEDNSSettingsManager *_dnsSettingsManager;
    NSMutableArray *_createdManagers;
    NSMutableArray *_currentManagers;
    NSString *_targetAppBundleID;
    NSXPCConnection *_connection;
    id<NEConfigurationCommandHandling> _remoteObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)initWithClientName:(id)a0;
- (id)filterConfiguration;
- (id)onDemandRules;
- (void)setOnDemandRules:(id)a0;
- (void)handleConfigChanged:(id)a0;
- (void)handleCommand:(int)a0 forConfigWithName:(id)a1 withParameters:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)onDemandEnabled;
- (void)setOnDemandEnabled:(BOOL)a0;
- (BOOL)isAlwaysOn;
- (id)protocolForParameters:(id)a0;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (BOOL)createConfigurationWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProtocolWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProviderTypeWithParameters:(id)a0 errorStr:(id *)a1;

@end
