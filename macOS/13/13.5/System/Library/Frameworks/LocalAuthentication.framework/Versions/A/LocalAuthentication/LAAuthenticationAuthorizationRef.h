@interface LAAuthenticationAuthorizationRef : NSObject

@property (readonly, nonatomic) const struct AuthorizationOpaqueRef { } *authorization;

- (id)initWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (id)numberForTag:(char *)a0;

@end
