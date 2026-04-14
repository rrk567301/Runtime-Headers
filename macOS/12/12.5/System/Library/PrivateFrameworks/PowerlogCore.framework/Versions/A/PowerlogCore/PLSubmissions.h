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

- (id)init;
- (void).cxx_destruct;
- (id)workQueue;
- (void)removeFileAtPath:(id)a0;
- (void)logOTAStatus:(id)a0;
- (void)stopDRTasking;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (void)taskingModeSafeguard;
- (void)taskingModeSetup;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)registerUploadSchedulingActivity;
- (void)handleXPCActivityCallback:(id)a0;
- (BOOL)internalSubmissionBehavior;
- (void)finishXPCActivity:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (void)fileCleanupWithRecord:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (id)enqueueFileForUpload:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (void)initSubmissionQueue;
- (void)setupDRTasking;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (id)configFromMonitor:(id)a0;
- (BOOL)taskingBlobDRExists;
- (BOOL)taskingBlobLegacyExists;
- (int)checkTaskingCompletionStatus;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (short)submitReasonForToday;
- (id)getCurrentDRConfig;
- (void)emitCollisionEvent:(id)a0;
- (void)rejectTaskingDRConfig;
- (id)getLastBatteryTimestampSystem;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)taskingCleanup;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)emitBlobVerifiedEvent:(id)a0;
- (void)persistSubmissionInfo:(id)a0;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (id)generateCKRecordDictionaryWithRecord:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)disableHangtracer;
- (void)clearTaskingDRConfig;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)enableHangtracer;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (id)generateMSSSubmissionWithPayload:(id)a0;

@end
