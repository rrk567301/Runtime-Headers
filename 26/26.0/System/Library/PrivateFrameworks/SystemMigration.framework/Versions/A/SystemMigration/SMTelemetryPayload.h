@class NSString;

@interface SMTelemetryPayload : NSObject

@property (copy, nonatomic) NSString *telemetryType;
@property (nonatomic) unsigned int sessionID;
@property (copy, nonatomic) NSString *runType;
@property (copy, nonatomic) NSString *sourceModel;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *initialConnectionType;
@property (nonatomic) BOOL isPreReboot;
@property (nonatomic) long long numberOfUsersMigrated;
@property (copy, nonatomic) NSString *originatingApplication;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) BOOL stopRequested;
@property (nonatomic) BOOL isFatalFailure;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *stateTracker;
@property (nonatomic) long long suspendCount;
@property (nonatomic) long long disconnectCount;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) double pathingDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) double attemptPeerToPeerStepDuration;
@property (nonatomic) double commitDeferredSandboxStepDuration;
@property (nonatomic) double migrateAutoLoginUserStepDuration;
@property (nonatomic) double migrateFilesStepDuration;
@property (nonatomic) double migrateGroupsStepDuration;
@property (nonatomic) double shoveStepDuration;
@property (nonatomic) double migrateSystemInfoStepDuration;
@property (nonatomic) double migrateUserAccountsStepDuration;
@property (nonatomic) double migrateUserHomesStepDuration;
@property (nonatomic) double windowsMigrateUserAccountsStepDuration;
@property (nonatomic) double windowsMigrateUserComponentsStepDuration;
@property (nonatomic) double windowsImportUserDataStepDuration;
@property (nonatomic) double windowsMigrateSystemComponentsStepDuration;
@property (nonatomic) double windowsMigrateOtherComponentsStepDuration;
@property (nonatomic) double windowsMigrateFilesStepDuration;
@property (nonatomic) BOOL isNewRulesEngineEnabled;
@property (copy, nonatomic) NSString *incompatibleBundleID;
@property (copy, nonatomic) NSString *incompatibleBundleName;

- (id)init;
- (void).cxx_destruct;

@end
