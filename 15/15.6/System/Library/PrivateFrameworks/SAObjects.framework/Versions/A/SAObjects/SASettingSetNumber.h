@interface SASettingSetNumber : SASettingSetValue

@property (nonatomic) char increment;

+ (id)setNumber;
+ (id)setNumberWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
