@class NSString;

@interface SAUIStartImmersiveExperience : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
