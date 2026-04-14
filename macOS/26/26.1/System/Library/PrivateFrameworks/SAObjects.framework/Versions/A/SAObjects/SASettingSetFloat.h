@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (id)setFloatWithDictionary:(id)a0 context:(id)a1;
+ (id)setFloat;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
