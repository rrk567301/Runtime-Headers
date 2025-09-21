@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) char toggle;
@property (nonatomic) char value;

+ (id)setBool;
+ (id)setBoolWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
