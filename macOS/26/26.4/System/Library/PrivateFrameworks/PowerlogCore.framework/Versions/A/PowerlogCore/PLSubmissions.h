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
- (void)taskingCleanup;
- (void)removeFileAtPath:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)initSubmissionQueue;
- (void)disableHangtracer;
- (id)configFromMonitor:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (short)submitReasonForToday;
- (id)enqueueFileForUpload:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (void)finishXPCActivity:(id)a0;
- (void)taskingModeSafeguard;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (BOOL)internalSubmissionBehavior;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (void)sendSubmissionIssueSignature:(id)a0;
- (BOOL)fullModeSubmissionBehavior;
- (void)emitCollisionEvent:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)performSubmission:(id)a0;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (void).cxx_destruct;
- (void)deferXPCActivity:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (BOOL)taskingBlobLegacyExists;
- (BOOL)taskingBlobDRExists;
- (id)getCurrentDRConfig;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)removeFileAtURL:(id)a0;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void)clearTaskingDRConfig;
- (id)init;
- (void)rejectTaskingDRConfig;
- (void)taskingModeSetup;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)setupDRTasking;
- (void)stopDRTasking;
- (void)enableHangtracer;
- (void)logOTAStatus:(id)a0;
- (void)persistSubmissionInfo:(id)a0;
- (void)registerUploadSchedulingActivity;
- (id)getLastBatteryTimestampSystem;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (BOOL)taskingTypeSpecified;
- (BOOL)taskingBlobExists;
- (void)submitWithTaskingConfig:(id)a0;
- (void)handleXPCActivityCallback:(id)a0;

@end
