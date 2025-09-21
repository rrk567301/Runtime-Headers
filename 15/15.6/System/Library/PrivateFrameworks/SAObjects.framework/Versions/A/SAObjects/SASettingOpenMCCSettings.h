@interface SASettingOpenMCCSettings : SASettingOpenAppSettings

+ (id)openMCCSettings;
+ (id)openMCCSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
