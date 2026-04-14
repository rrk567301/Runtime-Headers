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

- (id)getCurrentDRConfig;
- (id)workQueue;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)stopDRTasking;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)registerUploadSchedulingActivity;
- (void)fileCleanupWithRecord:(id)a0;
- (void)disableHangtracer;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void)sendSubmissionIssueSignature:(id)a0;
- (BOOL)taskingBlobDRExists;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (id)init;
- (id)getLastBatteryTimestampSystem;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (void)taskingModeSafeguard;
- (BOOL)taskingBlobExists;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (id)configFromMonitor:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)enableHangtracer;
- (void)logOTAStatus:(id)a0;
- (void)initSubmissionQueue;
- (void).cxx_destruct;
- (void)emitBlobDetectedEvent:(id)a0;
- (BOOL)internalSubmissionBehavior;
- (void)taskingModeSetup;
- (void)removeFileAtURL:(id)a0;
- (void)persistSubmissionInfo:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (void)setupDRTasking;
- (void)removeFileAtPath:(id)a0;
- (void)performSubmission:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)clearTaskingDRConfig;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (BOOL)fullModeSubmissionBehavior;
- (void)rejectTaskingDRConfig;
- (short)submitReasonForToday;
- (BOOL)taskingTypeSpecified;
- (void)handleXPCActivityCallback:(id)a0;
- (void)submitWithTaskingConfig:(id)a0;
- (void)taskingCleanup;
- (BOOL)taskingBlobLegacyExists;
- (id)enqueueFileForUpload:(id)a0;

@end
