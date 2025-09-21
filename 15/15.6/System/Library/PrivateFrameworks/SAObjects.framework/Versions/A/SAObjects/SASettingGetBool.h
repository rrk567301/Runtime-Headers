@interface SASettingGetBool : SASettingGetValue

+ (id)getBool;
+ (id)getBoolWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
