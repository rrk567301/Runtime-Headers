@class NEDNSProxyProviderProtocol, NEFilterProviderConfiguration, NSArray, NEAppPush, NSString, NEDNSSettingsBundle, NEConfigurationManager, NSMutableArray, NEConfiguration;

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NEConfiguration *_currentConfiguration;
    struct AuthorizationOpaqueRef { } *_authorization;
}

@property char enabled;
@property char onDemandEnabled;
@property char onDemandUserOverrideDisabled;
@property (nonatomic) char disconnectOnDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (readonly) char isAlwaysOn;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property (readonly) NEAppPush *appPush;
@property (readonly) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithName:(id)a0;
+ (void)removeClientWithName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClientName:(id)a0;
- (char)unsetCommonParameters:(id)a0 errorStr:(id *)a1;
- (char)addOnDemandRuleWithParameters:(id)a0 errorStr:(id *)a1;
- (char)addRelayWithParameters:(id)a0 errorStr:(id *)a1;
- (char)createConfigurationWithParameters:(id)a0 errorStr:(id *)a1;
- (void)handleCommand:(int)a0 forConfigWithName:(id)a1 withParameters:(id)a2 completionHandler:(id /* block */)a3;
- (id)initInternalWithClientName:(id)a0;
- (id)protocolForParameters:(id)a0;
- (char)removeOnDemandRuleWithParameters:(id)a0 errorStr:(id *)a1;
- (char)removeRelayWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setAppPushParameters:(id)a0 errorStr:(id *)a1;
- (char)setCommonParameters:(id)a0 errorStr:(id *)a1;
- (char)setDNSParameters:(id)a0 errorStr:(id *)a1;
- (char)setDNSProxyWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setFilterPluginWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setIPSecParameters:(id)a0 errorStr:(id *)a1;
- (char)setPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setProtocolWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setProviderTypeWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setProxyParameters:(id)a0 errorStr:(id *)a1;
- (char)setProxyServer:(id)a0 errorStr:(id *)a1;
- (char)setRelayConditionsWithParameters:(id)a0 errorStr:(id *)a1;
- (char)setSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetAppPushParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetDNSParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetDNSProxyWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetFilterPluginParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetIPSecParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetProxyParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetProxyServer:(id)a0 errorStr:(id *)a1;
- (char)unsetRelayConditionsWithParameters:(id)a0 errorStr:(id *)a1;
- (char)unsetSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;

@end
