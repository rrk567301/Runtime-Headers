@class NSString;

@interface SAUIStartImmersiveExperience : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
