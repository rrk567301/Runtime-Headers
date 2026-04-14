@interface AdminDSAuthenticator : AdminAuthenticator

@property (readonly) BOOL didClearTextAuthentication;

+ (id)sharedDSAuthenticator;
+ (id)sharedDSClearTextAuthenticator;

- (void)finalize;
- (void)dealloc;
- (void)deauthenticate;
- (void)authenticateUsingAuthorization:(id)a0;
- (BOOL)authenticateUsingAuthorizationSync:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (void)authenticateUsingAuthorizationSync:(id)a0 userName:(id)a1 password:(id)a2;

@end
