@interface SASettingGetBrightness : SASettingGetFloat

+ (id)getBrightness;
+ (id)getBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
