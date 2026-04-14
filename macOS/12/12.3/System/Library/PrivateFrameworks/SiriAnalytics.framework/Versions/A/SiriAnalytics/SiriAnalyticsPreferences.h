@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

- (id)init;
- (void)synchronize;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (BOOL)tailMessagesToOSLogEnabled;

@end
