@class NSArray;

@interface SACheckAuthenticationRequirement : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *restrictionsOnCompanion;

+ (id)checkAuthenticationRequirement;
+ (id)checkAuthenticationRequirementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
