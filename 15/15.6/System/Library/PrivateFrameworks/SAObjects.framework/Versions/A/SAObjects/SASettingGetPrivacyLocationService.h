@interface SASettingGetPrivacyLocationService : SASettingGetBool

+ (id)getPrivacyLocationService;
+ (id)getPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
