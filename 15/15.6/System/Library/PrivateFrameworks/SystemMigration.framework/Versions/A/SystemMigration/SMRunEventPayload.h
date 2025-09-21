@class NSString;

@interface SMRunEventPayload : NSObject

@property (nonatomic) unsigned int sessionID;
@property (copy, nonatomic) NSString *runType;
@property (copy, nonatomic) NSString *sourceModel;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *initialConnectionType;
@property (nonatomic) char isPreReboot;
@property (nonatomic) char isSuccess;
@property (nonatomic) char isCompleted;
@property (nonatomic) char stopRequested;
@property (nonatomic) char isFatalFailure;
@property (copy, nonatomic) NSString *errorString;
@property (copy, nonatomic) NSString *stateTracker;
@property (nonatomic) long long suspendCount;
@property (nonatomic) long long disconnectCount;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) double pathingDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) double AttemptPeerToPeerStepDuration;
@property (nonatomic) double CommitDeferredSandboxStepDuration;
@property (nonatomic) double MigrateAutoLoginUserStepDuration;
@property (nonatomic) double MigrateFilesStepDuration;
@property (nonatomic) double MigrateGroupsStepDuration;
@property (nonatomic) double MigrateGuestAccountStepDuration;
@property (nonatomic) double ShoveStepDuration;
@property (nonatomic) double MigrateSystemInfoStepDuration;
@property (nonatomic) double MigrateUserAccountsStepDuration;
@property (nonatomic) double MigrateUserHomesStepDuration;

- (id)init;
- (void).cxx_destruct;

@end
