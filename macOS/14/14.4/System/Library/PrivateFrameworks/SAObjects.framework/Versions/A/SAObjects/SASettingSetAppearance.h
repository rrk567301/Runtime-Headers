@class NSString;

@interface SASettingSetAppearance : SASettingSetValue

@property (copy, nonatomic) NSString *appearance;

+ (id)setAppearance;
+ (id)setAppearanceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
