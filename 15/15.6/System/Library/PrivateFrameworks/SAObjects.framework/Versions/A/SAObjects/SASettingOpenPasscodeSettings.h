@interface SASettingOpenPasscodeSettings : SASettingOpenSettings

+ (id)openPasscodeSettings;
+ (id)openPasscodeSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
