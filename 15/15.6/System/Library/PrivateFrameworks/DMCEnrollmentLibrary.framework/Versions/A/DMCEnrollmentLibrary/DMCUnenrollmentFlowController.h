@class NSString;
@protocol DMCUnenrollmentFlowPresenter, DMCEnrollmentFlowMCBridge;

@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (retain, nonatomic) id<DMCUnenrollmentFlowPresenter> presenter;
@property (retain, nonatomic) id<DMCEnrollmentFlowMCBridge> managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ unenrollmentCompletionHandler;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *personaID;
@property (nonatomic) char isAppleMAID;

- (void).cxx_destruct;
- (void)_resetToInitialStepsWithSilent:(char)a0;
- (void)_askForPasscodeIfNeeded;
- (void)_askForUserConfirmationIsAppleMAID:(char)a0;
- (void)_flowTerminatedWithError:(id)a0 canceled:(char)a1;
- (id)_interactiveUnenrollmentSteps;
- (id)_nameForStep:(unsigned long long)a0;
- (void)_preflightUnenrollmentWithAccoutAltDSID:(id)a0;
- (id)_silentUnenrollmentSteps;
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)a0 personaID:(id)a1 altDSID:(id)a2 isAppleMAID:(char)a3;
- (void)_workerQueue_flowCompleted;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (id)initWithPresenter:(id)a0 managedConfigurationHelper:(id)a1;
- (void)unenrollAccountWithAltDSID:(id)a0 silent:(char)a1 completionHandler:(id /* block */)a2;

@end
