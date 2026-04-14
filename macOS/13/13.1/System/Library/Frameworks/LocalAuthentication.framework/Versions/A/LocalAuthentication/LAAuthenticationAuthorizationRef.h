@interface LAAuthenticationAuthorizationRef : NSObject

@property (readonly, nonatomic) const struct AuthorizationOpaqueRef { } *authorization;

- (id)numberForTag:(char *)a0;
- (id)initWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;

@end
