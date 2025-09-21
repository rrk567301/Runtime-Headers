@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue

@property (copy, nonatomic) NSString *noiseManagementOption;

+ (id)setNoiseManagement;
+ (id)setNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
