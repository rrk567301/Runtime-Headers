@interface DSAuthenticator : Authenticator

@property (readonly) BOOL didClearTextAuthentication;

+ (id)sharedDSAuthenticator;
+ (id)sharedDSClearTextAuthenticator;

- (void)finalize;
- (void)dealloc;
- (void)authenticateUsingAuthorization:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (BOOL)authenticateUsingAuthorizationSync:(id)a0;
- (void)authenticateUsingAuthorizationSync:(id)a0 userName:(id)a1 password:(id)a2;
- (void)deauthenticate;

@end
