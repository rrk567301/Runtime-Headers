@interface SASettingSetBrightness : SASettingSetFloat

+ (id)setBrightness;
+ (id)setBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
