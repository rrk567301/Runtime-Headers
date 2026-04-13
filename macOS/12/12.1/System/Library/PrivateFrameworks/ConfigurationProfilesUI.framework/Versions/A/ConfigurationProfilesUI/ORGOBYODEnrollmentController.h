@class NSDictionary, NSString;

@interface ORGOBYODEnrollmentController : CPUI_EnrollmentController

@property (retain) NSDictionary *extAuth;
@property (retain) NSString *serviceURL;
@property (retain) NSString *DEPSource;
@property BOOL isDEPUpdate;
@property (retain) NSDictionary *setupInfoForMacBuddy;
@property long long enrollmentFlow;
@property (retain) NSString *bearerToken;
@property (retain) NSString *installedMDMProfileID;

- (void).cxx_destruct;
- (BOOL)inBuddy;
- (BOOL)simulatingDeferUserAccountCreationTillLogin;
- (BOOL)deferUserAccountCreationTillLogin;
- (id)getRMDeferAccountCreationInfo;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)startEnrollmentInWindow:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)a0 personaID:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
