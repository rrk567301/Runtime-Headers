@class NSString, GKLocalPlayer, NSDate, NSWindow;

@interface GKLocalPlayerAuthenticator : NSObject

@property BOOL forceAuthentication;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSString *alertTitle;
@property (retain) NSString *alertMessage;
@property (getter=isAuthenticated) BOOL authenticated;
@property (getter=isAuthenticating) BOOL authenticating;
@property (retain) NSDate *lastAuthDate;
@property (retain) NSString *lastAuthPlayerID;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property NSWindow *hostWindow;

+ (id)authenticatorForPlayerWithUsername:(id)a0 password:(id)a1;
+ (id)authenticatorForExistingPlayer:(id)a0;
+ (id)authenticatorForExistingPlayer:(id)a0 withHostWindow:(id)a1;
+ (id)authenticatorForPlayerWithUsername:(id)a0 password:(id)a1 withHostWindow:(id)a2;
+ (void)postURL:(id)a0 postBody:(id)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)_authenticateUsingAuthUI:(BOOL)a0 authenticationResults:(id)a1 usernameEditable:(BOOL)a2 authUIDismissHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_handleAuthResponse:(id)a0 error:(id)a1 handler:(id /* block */)a2;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(id /* block */)a0;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)a0 usernameEditable:(BOOL)a1 dismissHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldAuthenticateForGameCenter;
- (void)authenticateWithAuthKitResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(id /* block */)a0;
- (void)authenticationDidComplete;

@end
