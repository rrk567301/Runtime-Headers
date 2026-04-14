@interface SASettingSetBrightness : SASettingSetFloat

+ (id)setBrightness;
+ (id)setBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
