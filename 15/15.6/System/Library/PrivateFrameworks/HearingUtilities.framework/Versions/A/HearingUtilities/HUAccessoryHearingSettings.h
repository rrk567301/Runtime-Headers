@class NSDictionary;

@interface HUAccessoryHearingSettings : HCSettings

@property (retain, nonatomic) NSDictionary *activeHearingProtectionEnabled;
@property (retain, nonatomic) NSDictionary *activeHearingProtectionAvailable;

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (char)shouldStoreLocally;
- (id)activeHearingProtectionEnabled;
- (char)activeHearingProtectionEnabledForAddress:(id)a0;
- (void)setActiveHearingProtectionEnabled:(char)a0 forAddress:(id)a1;
- (id)activeHearingProtectionAvailable;
- (char)activeHearingProtectionAvailableForAddress:(id)a0;
- (void)setActiveHearingProtectionAvailable:(id)a0;
- (void)setActiveHearingProtectionAvailable:(char)a0 forAddress:(id)a1;
- (void)setActiveHearingProtectionEnabled:(id)a0;

@end
