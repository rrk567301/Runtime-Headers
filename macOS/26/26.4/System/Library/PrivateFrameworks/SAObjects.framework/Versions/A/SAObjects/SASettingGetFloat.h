@interface SASettingGetFloat : SASettingGetNumber

+ (id)getFloatWithDictionary:(id)a0 context:(id)a1;
+ (id)getFloat;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
