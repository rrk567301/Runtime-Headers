@interface SASettingGetWiFi : SASettingGetBool

+ (id)getWiFi;
+ (id)getWiFiWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
