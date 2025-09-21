@class NSString;
@protocol DMCUnenrollmentFlowMigrationDelegate, DMCUnenrollmentFlowPresenter, DMCEnrollmentFlowMCBridge;

@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (retain, nonatomic) id<DMCUnenrollmentFlowPresenter> presenter;
@property (retain, nonatomic) id<DMCEnrollmentFlowMCBridge> managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ unenrollmentCompletionHandler;
@property (nonatomic) unsigned long long unenrollmentType;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *personaID;
@property (nonatomic) BOOL isAppleMAID;
@property (weak) id<DMCUnenrollmentFlowMigrationDelegate> migrationDelegate;

- (void)_workerQueue_flowCompleted;
- (id)initWithPresenter:(id)a0 managedConfigurationHelper:(id)a1;
- (id)_silentUnenrollmentSteps;
- (void)_resetToInitialStepsWithSilent:(BOOL)a0;
- (id)_interactiveUnenrollmentSteps;
- (void)_askForPasscodeIfNeeded;
- (void)_preflightUnenrollmentWithUnenrollmentType:(unsigned long long)a0 accoutAltDSID:(id)a1;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)a0 personaID:(id)a1 altDSID:(id)a2 isAppleMAID:(BOOL)a3 unenrollmentType:(unsigned long long)a4;
- (void)_flowTerminatedWithError:(id)a0 canceled:(BOOL)a1;
- (void)unenrollADEWithCompletionHandler:(id /* block */)a0;
- (id)_nameForStep:(unsigned long long)a0;
- (void)unenrollAccountWithAltDSID:(id)a0 silent:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_askForUserConfirmationIsAppleMAID:(BOOL)a0;
- (void).cxx_destruct;

@end
