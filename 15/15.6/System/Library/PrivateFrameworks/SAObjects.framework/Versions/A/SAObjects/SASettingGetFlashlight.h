@interface SASettingGetFlashlight : SASettingGetBool

+ (id)getFlashlight;
+ (id)getFlashlightWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
