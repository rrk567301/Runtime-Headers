@interface SASettingGetAppearance : SASettingGetValue

+ (id)getAppearance;
+ (id)getAppearanceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
