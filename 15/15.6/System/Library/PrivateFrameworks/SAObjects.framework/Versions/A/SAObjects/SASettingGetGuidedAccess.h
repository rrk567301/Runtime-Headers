@interface SASettingGetGuidedAccess : SASettingGetBool

+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
