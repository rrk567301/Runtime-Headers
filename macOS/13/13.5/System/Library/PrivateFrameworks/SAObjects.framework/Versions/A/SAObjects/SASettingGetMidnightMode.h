@interface SASettingGetMidnightMode : SASettingGetBool

+ (id)getMidnightMode;
+ (id)getMidnightModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
