@class NSString, GKLocalPlayer, NSDate, NSWindow;

@interface GKLocalPlayerAuthenticator : NSObject

@property char forceAuthentication;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSString *alertTitle;
@property (retain) NSString *alertMessage;
@property (getter=isAuthenticated) char authenticated;
@property (getter=isAuthenticating) char authenticating;
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
+ (char)shouldDisableLoginConsideringSharePlayAvailabilityWithAuthenticateResponse:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (char)shouldAuthenticateForGameCenter;
- (void)_authenticateUsingAuthUI:(char)a0 authenticationResults:(id)a1 usernameEditable:(char)a2 authUIDismissHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_handleAuthResponse:(id)a0 error:(id)a1 handler:(id /* block */)a2;
- (void)_handleEditedAuthResponse:(id)a0 error:(id)a1 handler:(id /* block */)a2;
- (char)_shouldDisableWithGlobalDisabled:(char)a0 appLevelDisabled:(char)a1 processLevelDisabled:(char)a2;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(id /* block */)a0;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(char)a0 usernameEditable:(char)a1 dismissHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* block */)a0;
- (void)authenticateWithAuthKitResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticationDidComplete;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(id /* block */)a0;

@end
