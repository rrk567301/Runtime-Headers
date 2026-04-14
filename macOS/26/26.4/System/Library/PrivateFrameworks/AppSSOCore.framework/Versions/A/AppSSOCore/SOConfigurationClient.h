@class SOClient, SOConfigurationVersion, SOConfiguration;

@interface SOConfigurationClient : NSObject {
    SOClient *_client;
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
}

@property (readonly, nonatomic) SOConfiguration *configuration;
@property (readonly, nonatomic) long long configVersion;

+ (id)defaultClient;

- (BOOL)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (void)isConfigurationActiveForExtensionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_checkNewVersion;
- (void).cxx_destruct;
- (id)init;
- (void)_reloadConfig;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;

@end
