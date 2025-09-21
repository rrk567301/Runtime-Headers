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
@property char logsHaveAttached;
@property char mountedWithoutFirmlinks;
@property char hasSetupProgress;
@property char currentStepIsInRecovery;
@property char loginCredentialsCommitted;
@property (retain) OSITemplateMigrationOptions *options;

+ (id)progressPhaseName;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)startOperation;
- (void)setupProgress;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)_commitLoginCredentialsIfNeeded;
- (void)cleanupArchiveForRequest:(id)a0 error:(id *)a1;
- (void)pauseAfterStep:(id)a0;
- (char)archiveExistingContent:(id *)a0;
- (void)cleanupIAFromTarget;
- (void)completeProgressForTask:(unsigned long long)a0;
- (char)createMigrationRequest;
- (void)initializeInstallerDiagnostics;
- (void)installPOSPToken;
- (char)instantiateTemplate:(id *)a0;
- (void)mergeInstallHistory;
- (char)migrateArchivedContentToFreshTemplate:(id *)a0;
- (void)performAuxKernelCacheOperation;
- (void)performEraseInstall;
- (char)performTasks:(id *)a0;
- (char)performTransitionsAfter:(unsigned long long)a0 upTo:(unsigned long long)a1;
- (char)performTransitionsBefore:(unsigned long long)a0;
- (char)performTransitionsFor:(unsigned long long)a0;
- (void)persistDiagnostics;
- (void)persistSyslog;
- (void)quitOrReboot;
- (char)reapExistingContent:(id *)a0;
- (void)recordInstallType;
- (void)setupBoottimeInstall;
- (void)setupPather;
- (void)setupSeedingProgram;
- (void)updateProgress:(id)a0 forTask:(unsigned long long)a1;
- (void)writeDefaultLanguage;

@end
