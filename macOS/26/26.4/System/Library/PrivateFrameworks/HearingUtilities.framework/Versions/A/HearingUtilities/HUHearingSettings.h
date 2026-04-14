@interface HUHearingSettings : HCSettings

+ (id)sharedInstance;

- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (void)logMessage:(id)a0;

@end
