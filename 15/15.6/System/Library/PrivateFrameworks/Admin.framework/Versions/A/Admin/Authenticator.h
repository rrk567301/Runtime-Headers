@interface Authenticator : NSObject {
    char _syncWaitDone;
}

@property (readonly) char wantsClearTextAuthentication;

+ (id)sharedAuthenticator;
+ (id)sharedClearTextAuthenticator;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (char)isAuthenticated;
- (void)authenticateUsingAuthorization:(id)a0;
- (void)_toolStartedNotification:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (char)authenticateUsingAuthorizationSync:(id)a0;
- (void)authenticateUsingAuthorizationSync:(id)a0 userName:(id)a1 password:(id)a2;
- (void)authenticateUsingExternalForm:(id)a0;
- (char)authenticateUsingExternalFormSync:(id)a0;
- (void)deauthenticate;
- (id)initClearTextAuthenticator;

@end
