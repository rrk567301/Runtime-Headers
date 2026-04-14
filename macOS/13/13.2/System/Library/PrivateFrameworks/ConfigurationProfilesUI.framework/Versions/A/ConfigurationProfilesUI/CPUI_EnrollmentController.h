@class NSError, NSString, DMCEnrollmentFlowController, NSMutableDictionary, NSDictionary, CPProfile, NSObject, NSWindow, CPUI_ProgressWindowController;
@protocol CPUI_ProgressHandler;

@interface CPUI_EnrollmentController : NSObject <DMCEnrollmentFlowPresenter, DMCEnrollmentFlowMCBridge>

@property (retain) DMCEnrollmentFlowController *enrollmentFlowController;
@property (retain) NSWindow *callerHostWindow;
@property BOOL suppressUI;
@property (readonly) NSWindow *hostWindow;
@property (retain) NSObject<CPUI_ProgressHandler> *hostProgress;
@property (retain) CPUI_ProgressWindowController *progressController;
@property (retain) NSString *progressLogPrefix;
@property (retain) NSString *progressTitle;
@property BOOL isDeviceEnrollment;
@property (retain) NSString *managedAppleID;
@property (retain) NSMutableDictionary *appleAccountInfo;
@property (retain) CPProfile *enrollmentProfile;
@property (retain) NSDictionary *akAuthResults;
@property (retain) NSDictionary *orgInfo;
@property (retain) NSDictionary *cloudConfig;
@property (retain) NSError *enrollmentFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeProgress;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)a0 personaID:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(id)a0;
- (void)requestWebAuthenticationWithWebAuthURL:(id)a0 authenticator:(id)a1 authParams:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(id)a0 personaID:(id)a1 requireAppleMAID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)requestDevicePasscodeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDevicePasscodeSet;
- (id)getMachineInfoForEnrollmentType:(unsigned long long)a0 enrollmentMethod:(unsigned long long)a1;
- (id)profileIdentifierFromMDMProfile:(id)a0 error:(id *)a1;
- (id)assignedManagedAppleIDFromMDMProfile:(id)a0 error:(id *)a1;
- (id)friendlyNameForMDMPayloadInProfile:(id)a0 error:(id *)a1;
- (id)organizationFromMDMProfile:(id)a0 error:(id *)a1;
- (id)detailsFromMDMProfile:(id)a0 error:(id *)a1;
- (id)readEnrollmentDirtyState;
- (id)bestOrgName;
- (void)setProgress:(id)a0 info:(id)a1;
- (void)requestUsernameWithCompletionHandler:(id /* block */)a0;

@end
