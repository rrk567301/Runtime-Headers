@class NSMutableArray, NSString, PLSQLiteConnection, DRConfigMonitor, NSNumber, PLStorageOperator;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (void)setupDRTasking;
- (id)workQueue;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)removeFileAtPath:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (BOOL)taskingBlobLegacyExists;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (id)configFromMonitor:(id)a0;
- (void)clearTaskingDRConfig;
- (void)taskingModeSafeguard;
- (void)performSubmission:(id)a0;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (BOOL)internalSubmissionBehavior;
- (void)taskingModeSetup;
- (void)taskingCleanup;
- (BOOL)fullModeSubmissionBehavior;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (void)stopDRTasking;
- (id)getLastBatteryTimestampSystem;
- (id)getCurrentDRConfig;
- (void)sendSubmissionIssueSignature:(id)a0;
- (id)enqueueFileForUpload:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)handleXPCActivityCallback:(id)a0;
- (id)init;
- (void)enableHangtracer;
- (BOOL)taskingTypeSpecified;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)registerUploadSchedulingActivity;
- (BOOL)taskingBlobDRExists;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (short)submitReasonForToday;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)persistSubmissionInfo:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)initSubmissionQueue;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)rejectTaskingDRConfig;
- (BOOL)taskingBlobExists;
- (void)logOTAStatus:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (void)disableHangtracer;
- (void).cxx_destruct;
- (void)submitWithTaskingConfig:(id)a0;

@end
