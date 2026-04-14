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

- (id)workQueue;
- (void)taskingModeSafeguard;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)setupDRTasking;
- (void)removeFileAtPath:(id)a0;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (id)getCurrentDRConfig;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)clearTaskingDRConfig;
- (void)disableHangtracer;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (BOOL)taskingBlobLegacyExists;
- (void)logOTAStatus:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (BOOL)taskingTypeSpecified;
- (void)submitWithTaskingConfig:(id)a0;
- (void)rejectTaskingDRConfig;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)initSubmissionQueue;
- (id)getLastBatteryTimestampSystem;
- (void).cxx_destruct;
- (BOOL)taskingBlobExists;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (BOOL)taskingBlobDRExists;
- (void)persistSubmissionInfo:(id)a0;
- (void)performSubmission:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (void)taskingModeSetup;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (BOOL)internalSubmissionBehavior;
- (id)configFromMonitor:(id)a0;
- (void)registerUploadSchedulingActivity;
- (id)enqueueFileForUpload:(id)a0;
- (id)init;
- (int)checkTaskingCompletionStatus;
- (short)submitReasonForToday;
- (void)stopDRTasking;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)taskingCleanup;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (BOOL)fullModeSubmissionBehavior;
- (void)enableHangtracer;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)handleXPCActivityCallback:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;

@end
