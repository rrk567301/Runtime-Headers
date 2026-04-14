@class NSString, NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription>

@property BOOL hasLoaded;
@property (retain) NEConfiguration *configuration;
@property (readonly) NEConfigurationManager *configurationManager;
@property (copy) NSString *localizedDescription;
@property (retain) NEDNSProxyProviderProtocol *providerProtocol;
@property (getter=isEnabled) BOOL enabled;

+ (id)sharedManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)createEmptyConfiguration;
- (id)initDNSProxyManagerWithPluginType:(id)a0;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)a0;

@end
