@class NSMutableArray, NSMutableDictionary, NSTimer, SUCoreLog, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetScheduler : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *schedulerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableArray *jobsAwaitingTrigger;
@property (nonatomic) long long jobsAwaitingPushTrigger;
@property (retain, nonatomic) NSMutableDictionary *jobsBySelector;
@property (nonatomic) BOOL globalActivityInterval;
@property (nonatomic) long long activityIntervalSecs;
@property (nonatomic) long long tickerIntervalSecs;
@property (nonatomic) BOOL tickerIntervalReRegistering;
@property (nonatomic) BOOL activityTickerFired;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long pushCounter;
@property (nonatomic) long long scheduledJobsXPCActivity;
@property (retain, nonatomic) NSTimer *scheduledJobsBackupTriggerTimer;
@property (nonatomic) long long pushJobsXPCActivity;

+ (void)forceGlobalForget:(id)a0;
+ (id)autoAssetScheduler;
+ (void)resumeFromPersisted;
+ (void)scheduleSelector:(id)a0 triggeringAtIntervalSecs:(long long)a1;
+ (void)jobFinishedForSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
+ (void)schedulePushNotifications:(id)a0;
+ (void)controlEliminateSelector:(id)a0;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)jobTypeName:(BOOL)a0 requiringRetry:(BOOL)a1;
+ (id)nameForXPCStatus:(long long)a0;
+ (long long)tickerIntervalForActivityIntervalSecs:(long long)a0;
+ (BOOL)isSelector:(id)a0 consideredEqualTo:(id)a1;
+ (void)addScheduledJobs:(id)a0 basedOnControl:(id)a1;
+ (id)jobsAwaitingTrigger;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)summary;
- (void)_scheduleSelector:(id)a0 triggeringAtIntervalSecs:(long long)a1 withRemainingSecs:(long long)a2 forPushedJob:(BOOL)a3 triggeringIfLearned:(BOOL)a4;
- (void)_schedulePushNotifications:(id)a0;
- (void)_jobFinishedForSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
- (void)_eliminateSelector:(id)a0;
- (void)_eliminateSpecificSelector:(id)a0;
- (void)_registerForAndStartActivity:(long long)a0;
- (void)_startActivityBackupTrigger;
- (void)_registerForAndStartPushActivity:(long long)a0;
- (void)_startPushBackupTrigger;
- (void)_setActivityCriteria:(id)a0 pushNotificationInitiated:(BOOL)a1 withActivityDelay:(long long)a2;
- (void)_performActivityOperations;
- (void)_performTickerOperations:(long long)a0;
- (void)_performPushNotificationActivityOperations;
- (void)_performPushNotificationOperations;
- (void)_resumeConnector;
- (void)_informConnectorAlteredSelectors;
- (void)_informConnectorTriggeredSelectors:(id)a0 withTriggeredRequiringRetry:(id)a1;
- (void)_informConnectorActiveJobFinishedforSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
- (id)_copyCurrentlyScheduledSelectors;
- (id)_copyCurrentlyScheduledSelectorsRequiringRetry;
- (void)_logPersistedConfigLoad:(id)a0 activityIntervalSecs:(long long)a1 pushTriggerSecs:(long long)a2 message:(id)a3;
- (void)_logPersistedConfigSet:(id)a0 activityIntervalSecs:(long long)a1 pushTriggerSecs:(long long)a2 message:(id)a3;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingSelector:(id)a2 intervalSecs:(long long)a3 remainingSecs:(long long)a4 pushedJob:(BOOL)a5 requiringRetry:(BOOL)a6 message:(id)a7;
- (void)_logPersistedRemovedEntry:(id)a0 removedSelector:(id)a1 message:(id)a2;
- (void)_logPersistedTableOfContents:(id)a0;

@end
