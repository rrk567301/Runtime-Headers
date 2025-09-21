@class NSString;

@interface SASettingGetBooleanPreference : SASettingGetBool

@property (copy, nonatomic) NSString *settingKey;

+ (id)getBooleanPreference;
+ (id)getBooleanPreferenceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
