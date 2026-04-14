@class NSError, NSArray, SMSystem_Daemon, NSMutableDictionary, NSDictionary, SMPaths, NSObject, OSITemplateMigrationOptions;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface OSITemplateMigrationController : OSIUABaseController <MigrationProgressEventsListener> {
    NSObject<OS_dispatch_queue> *_templateMigrationEngineQueue;
}

@property (retain) SMPaths *pather;
@property (retain) SMSystem_Daemon *targetSystem;
@property (retain) NSDictionary *progressExpectations;
@property (retain) NSMutableDictionary *progressReality;
@property unsigned long long totalFileEstimate;
@property (retain) NSObject<OS_dispatch_semaphore> *migrationInProgress;
@property (retain) NSError *fatalMigrationError;
@property (retain) NSArray *nonFatalMigrationErrors;
@property BOOL logsHaveAttached;
@property BOOL mountedWithoutFirmlinks;
@property BOOL hasSetupProgress;
@property BOOL currentStepIsInRecovery;
@property BOOL loginCredentialsCommitted;
@property (retain) OSITemplateMigrationOptions *options;

+ (id)progressPhaseName;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)startOperation;
- (void)setupProgress;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineProgressUpdate:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)enginePercentDone:(id)a0;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (BOOL)performTransitionsAfter:(unsigned long long)a0 upTo:(unsigned long long)a1;
- (BOOL)performTransitionsFor:(unsigned long long)a0;
- (void)recordInstallType;
- (BOOL)createMigrationRequest;
- (void)writeDefaultLanguage;
- (void)installPOSPToken;
- (void)setupBoottimeInstall;
- (void)setupSeedingProgram;
- (void)performEraseInstall;
- (void)cleanupIAFromTarget;
- (BOOL)performTransitionsBefore:(unsigned long long)a0;
- (BOOL)archiveExistingContent:(id *)a0;
- (BOOL)reapExistingContent:(id *)a0;
- (BOOL)instantiateTemplate:(id *)a0;
- (BOOL)migrateArchivedContentToFreshTemplate:(id *)a0;
- (void)pauseAfterStep:(id)a0;
- (void)completeProgressForTask:(unsigned long long)a0;
- (void)initializeInstallerDiagnostics;
- (void)setupPather;
- (BOOL)performTasks:(id *)a0;
- (void)performAuxKernelCacheOperation;
- (void)persistSyslog;
- (void)persistDiagnostics;
- (void)updateProgress:(id)a0 forTask:(unsigned long long)a1;
- (void)mergeInstallHistory;
- (void)cleanupArchiveForRequest:(id)a0 error:(id *)a1;
- (void)_commitLoginCredentialsIfNeeded;
- (void)quitOrReboot;

@end
