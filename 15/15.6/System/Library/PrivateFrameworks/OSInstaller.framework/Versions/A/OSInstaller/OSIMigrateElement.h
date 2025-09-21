@class NSString, NSArray, SMPaths, NSMutableArray, NSError;

@interface OSIMigrateElement : OSIInstallQueueElement <MigrationProgressEventsListener> {
    NSString *_systemRoot;
    NSString *_archiveRoot;
    NSString *_leftOversPath;
    NSMutableArray *_engineFileWarnings;
    NSError *_engineFatalError;
    NSArray *_ignoredFilesInPreviousSystem;
    char _engineIsRunning;
    char _hasStartedMigration;
}

@property (retain) SMPaths *pather;

+ (char)moveFilesAtPaths:(id)a0 toPreservationFolderAtPath:(id)a1 withError:(id *)a2;
+ (void)removeFlag:(int)a0 fromPath:(id)a1;
+ (id)validPathsForPreservation:(id)a0 onMountpoint:(id)a1 ignoreFiles:(id)a2 keepFiles:(id)a3;
+ (char)setupMigrationWithOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (char)_cleanupPath:(id)a0 saveAllFiles:(char)a1 onSystem:(id)a2 error:(id *)a3;
- (char)_deleteRegistrationCookie;
- (void)_doCleanupOnArchiveReturningError:(id *)a0 onSystem:(id)a1;
- (void)_mergeInstallHistory;
- (char)_moveFirmlinkedUserDataWithError:(id *)a0;
- (void)engineStarted;
- (double)estimatedTimeToComplete;

@end
