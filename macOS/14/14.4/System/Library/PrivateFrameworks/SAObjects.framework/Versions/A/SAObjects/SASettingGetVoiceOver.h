@interface SASettingGetVoiceOver : SASettingGetBool

+ (id)getVoiceOver;
+ (id)getVoiceOverWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
