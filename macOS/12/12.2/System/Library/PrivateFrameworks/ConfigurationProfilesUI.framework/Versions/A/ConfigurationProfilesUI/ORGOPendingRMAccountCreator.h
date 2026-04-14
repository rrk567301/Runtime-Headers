@class NSString;

@interface ORGOPendingRMAccountCreator : CPUI_EnrollmentController

@property BOOL isSilentReAuth;
@property (retain) NSString *rmAccountID;

- (void).cxx_destruct;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(id)a0 personaID:(id)a1 requireAppleMAID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)startEnrollmentInWindow:(id)a0 mdmProfile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
