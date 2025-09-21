@interface SASettingGetMidnightMode : SASettingGetBool

+ (id)getMidnightMode;
+ (id)getMidnightModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
