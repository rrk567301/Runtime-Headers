@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) BOOL toggle;
@property (nonatomic) BOOL value;

+ (id)setBool;
+ (id)setBoolWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
