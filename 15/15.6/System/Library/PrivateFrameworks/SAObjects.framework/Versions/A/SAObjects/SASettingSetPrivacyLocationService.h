@interface SASettingSetPrivacyLocationService : SASettingSetBool

@property (nonatomic) char userConfirmed;

+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
