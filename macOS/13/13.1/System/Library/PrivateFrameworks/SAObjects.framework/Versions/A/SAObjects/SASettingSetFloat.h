@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (id)setFloat;
+ (id)setFloatWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
