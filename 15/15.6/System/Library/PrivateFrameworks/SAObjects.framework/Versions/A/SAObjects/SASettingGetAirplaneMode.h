@interface SASettingGetAirplaneMode : SASettingGetBool

+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
