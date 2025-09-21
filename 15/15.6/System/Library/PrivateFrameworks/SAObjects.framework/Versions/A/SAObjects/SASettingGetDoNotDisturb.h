@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (id)getDoNotDisturb;
+ (id)getDoNotDisturbWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
