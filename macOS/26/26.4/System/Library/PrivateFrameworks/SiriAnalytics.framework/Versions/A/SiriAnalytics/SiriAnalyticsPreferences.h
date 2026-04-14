@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

@property (nonatomic) BOOL killSwitchEnabled;
@property (readonly, nonatomic) BOOL simulateCustomerImage;

- (void)synchronize;
- (id)pluginsState;
- (BOOL)tailMessagesToOSLogEnabled;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)setPluginState:(id)a0 forBundleIdentifier:(id)a1;
- (void)setPluginsState:(id)a0;
- (id)init;
- (id)pluginStateForBundleIdentifier:(id)a0;

@end
