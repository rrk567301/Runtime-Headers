@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) BOOL killSwitchEnabled;
@property (readonly, nonatomic) BOOL simulateCustomerImage;

- (void)synchronize;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (BOOL)tailMessagesToOSLogEnabled;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;
- (id)pluginsState;
- (id)pluginStateForBundleIdentifier:(id)a0;
- (void)setPluginsState:(id)a0;
- (id)init;

@end
