@class NEFilterManager, NSString, NSXPCConnection, NEDNSSettingsManager, NEDNSProxyManager, NSMutableArray, NSXPCListener, NEVPNManager;
@protocol NEConfigurationCommandHandling;

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {
    char _isServerMode;
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

- (char)enabled;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setEnabled:(char)a0;
- (id)initWithClientName:(id)a0;
- (char)onDemandEnabled;
- (char)createConfigurationWithParameters:(id)a0 errorStr:(id *)a1;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (id)filterConfiguration;
- (void)handleCommand:(int)a0 forConfigWithName:(id)a1 withParameters:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleConfigChanged:(id)a0;
- (char)isAlwaysOn;
- (id)onDemandRules;
- (id)protocolForParameters:(id)a0;
- (void)setOnDemandEnabled:(char)a0;
- (void)setOnDemandRules:(id)a0;
- (char)setPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setProtocolWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setProviderTypeWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;

@end
