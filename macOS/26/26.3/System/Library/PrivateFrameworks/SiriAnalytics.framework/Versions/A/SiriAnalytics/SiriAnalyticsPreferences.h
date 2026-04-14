@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) BOOL killSwitchEnabled;
@property (readonly, nonatomic) BOOL simulateCustomerImage;

- (id)pluginStateForBundleIdentifier:(id)a0;
- (id)init;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;
- (void)setPluginsState:(id)a0;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)synchronize;
- (BOOL)tailMessagesToOSLogEnabled;
- (id)pluginsState;

@end
