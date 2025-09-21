@interface SASettingGetValue : SASettingCommand

+ (id)getValue;
+ (id)getValueWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
