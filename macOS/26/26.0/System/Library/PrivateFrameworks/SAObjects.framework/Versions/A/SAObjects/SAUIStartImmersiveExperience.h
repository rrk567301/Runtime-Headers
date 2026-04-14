@class NSString;

@interface SAUIStartImmersiveExperience : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
