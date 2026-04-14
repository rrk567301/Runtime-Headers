@class NSString;

@interface SAUIStartImmersiveExperience : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
