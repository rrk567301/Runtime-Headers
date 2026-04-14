@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) BOOL killSwitchEnabled;
@property (readonly, nonatomic) BOOL simulateCustomerImage;

- (BOOL)tailMessagesToOSLogEnabled;
- (void)synchronize;
- (id)pluginsState;
- (id)pluginStateForBundleIdentifier:(id)a0;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;
- (id)init;
- (void)setPluginsState:(id)a0;

@end
