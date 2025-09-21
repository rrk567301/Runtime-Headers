@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) BOOL killSwitchEnabled;
@property (readonly, nonatomic) BOOL simulateCustomerImage;

- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)synchronize;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)tailMessagesToOSLogEnabled;
- (id)init;
- (id)pluginStateForBundleIdentifier:(id)a0;
- (void)setPluginsState:(id)a0;
- (id)pluginsState;

@end
