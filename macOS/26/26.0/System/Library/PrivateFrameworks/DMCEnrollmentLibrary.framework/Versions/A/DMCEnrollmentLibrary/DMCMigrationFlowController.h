@class DMCEnrollmentFlowController, NSString, NSDictionary, DMCUnenrollmentFlowController;
@protocol DMCMigrationFlowMCBridge, DMCMigrationFlowDelegate, DMCMigrationFlowPresenter;

@interface DMCMigrationFlowController : DMCEnrollmentFlowControllerBase <DMCEnrollmentFlowMigrationDelegate, DMCUnenrollmentFlowMigrationDelegate>

@property (retain, nonatomic) id<DMCMigrationFlowPresenter> presenter;
@property (retain, nonatomic) id<DMCMigrationFlowMCBridge> managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ migrationCompletionHandler;
@property (retain, nonatomic) DMCUnenrollmentFlowController *unenrollmentFlowController;
@property (retain, nonatomic) DMCEnrollmentFlowController *enrollmentFlowController;
@property (nonatomic) unsigned long long originEnrollmentType;
@property (retain, nonatomic) NSDictionary *pendingCloudConfig;
@property (nonatomic) BOOL canUsePendingCloudConfig;
@property (retain, nonatomic) NSDictionary *enrollmentCloudConfig;
@property (weak) id<DMCMigrationFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_workerQueue_flowCompleted;
- (void)_resetToInitialSteps;
- (id)initWithPresenter:(id)a0 managedConfigurationHelper:(id)a1;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_flowTerminatedWithError:(id)a0 canceled:(BOOL)a1;
- (id)_nameForStep:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_cleanupDirtyState;
- (id)_convertErrorToHumanReadableError:(id)a0;
- (id)_enrollmentTypeNotSupportedError;
- (void)_finalizeMigration;
- (void)_formalizePendingCloudConfig:(id)a0;
- (id)_migration_commonSteps;
- (id)_migration_enrollmentSteps;
- (id)_migration_unenrollmentSteps;
- (void)_performEnrollmentFlow;
- (void)_performUnenrollmentFlow;
- (void)_preflightMigration;
- (void)_preserveManagedAppsIfNeededWithPendingCloudConfig:(id)a0;
- (void)_promptForMigrationConsentWithEnrollmentType:(unsigned long long)a0 pendingCloudConfig:(id)a1;
- (void)_removeExistingCloudConfigProfile;
- (void)_removePendingCloudConfigIfNeededWithEnrollmentCloudConfig:(id)a0;
- (void)_sendEndMigrationRequestWithCloudConfig:(id)a0;
- (void)_sendStartMigrationRequestWithPendingCloudConfig:(id)a0;
- (id)_trustedErrors;
- (void)_workerQueue_cleanupCachedValues;
- (void)enrollmentFlowController:(id)a0 appInstallationStatusUpdatedForType:(id)a1 totalNumber:(unsigned long long)a2 finishedNumber:(unsigned long long)a3;
- (void)enrollmentFlowController:(id)a0 didReceiveCloudConfiguration:(id)a1;
- (void)enrollmentFlowController:(id)a0 performingEnrollmentStepWithName:(id)a1 status:(id)a2;
- (BOOL)enrollmentFlowControllerIsDoingMigration:(id)a0;
- (void)startMDMMigrationWithCompletionHandler:(id /* block */)a0;
- (void)unenrollmentFlowController:(id)a0 willUninstallProfile:(id)a1;

@end
