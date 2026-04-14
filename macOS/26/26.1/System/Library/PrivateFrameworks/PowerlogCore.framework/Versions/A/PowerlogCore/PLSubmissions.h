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

- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (void)stopDRTasking;
- (void)performSubmission:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)taskingModeSafeguard;
- (void)rejectTaskingDRConfig;
- (void)persistSubmissionInfo:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)taskingModeSetup;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (id)getCurrentDRConfig;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)finishXPCActivity:(id)a0;
- (void)removeFileAtPath:(id)a0;
- (BOOL)internalSubmissionBehavior;
- (int)checkTaskingCompletionStatus;
- (BOOL)fullModeSubmissionBehavior;
- (void)fileCleanupWithRecord:(id)a0;
- (id)workQueue;
- (id)enqueueFileForUpload:(id)a0;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (BOOL)taskingBlobExists;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)setupDRTasking;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)taskingCleanup;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (short)submitReasonForToday;
- (void)emitCollisionEvent:(id)a0;
- (BOOL)taskingBlobDRExists;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)submitWithTaskingConfig:(id)a0;
- (void)logOTAStatus:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void).cxx_destruct;
- (void)emitBlobDetectedEvent:(id)a0;
- (id)getLastBatteryTimestampSystem;
- (void)handleXPCActivityCallback:(id)a0;
- (void)enableHangtracer;
- (id)configFromMonitor:(id)a0;
- (BOOL)taskingTypeSpecified;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)clearTaskingDRConfig;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)disableHangtracer;
- (void)registerUploadSchedulingActivity;
- (void)initSubmissionQueue;
- (void)removeFileAtURL:(id)a0;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (BOOL)taskingBlobLegacyExists;
- (id)init;

@end
