@class ProviderConfiguration, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RemoteConfigurationController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _googleConfigurationDidChange;
    BOOL _tencentConfigurationDidChange;
    BOOL _appleConfigurationDidChange;
}

@property (readonly, nonatomic, getter=isSafeBrowsingOff) BOOL safeBrowsingOff;
@property (readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration;
@property (readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration;
@property (readonly, nonatomic) ProviderConfiguration *appleProviderConfiguration;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_providerToTurnOffFromProviderDictionary:(id)a0;
- (void)_initializeToDefaultProviderConfigurations;
- (void)_simplifyProviderConfigurations;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)a0;
- (void)_resetProviderConfigurationsDidChange;
- (id)_urlOfDownloadedConfiguration;
- (void)_loadConfigurationFromDiskIfNecessary;
- (void)_writeConfigurationToDisk:(id)a0;
- (void)_setCurrentConfiguration:(id)a0;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (void)_downloadConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_updateConfigurationIfNecessary;
- (void)_didReceiveConfigurationData:(id)a0;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (void)_scheduleConfigurationUpdateDaily;
- (BOOL)forceLoadConfigurationFromDisk;
- (BOOL)forceUpdateConfigurationFromServer;

@end
