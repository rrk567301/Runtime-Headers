@interface AdminAuthenticator : NSObject {
    BOOL _syncWaitDone;
}

@property (readonly) BOOL wantsClearTextAuthentication;

+ (id)sharedAuthenticator;
+ (id)sharedClearTextAuthenticator;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (BOOL)isAuthenticated;
- (void)deauthenticate;
- (id)initClearTextAuthenticator;
- (void)authenticateUsingExternalForm:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0;
- (BOOL)authenticateUsingAuthorizationSync:(id)a0;
- (BOOL)authenticateUsingExternalFormSync:(id)a0;
- (void)_toolStartedNotification:(id)a0;
- (void)authenticateUsingAuthorization:(id)a0 userName:(id)a1 password:(id)a2;
- (void)authenticateUsingAuthorizationSync:(id)a0 userName:(id)a1 password:(id)a2;

@end
