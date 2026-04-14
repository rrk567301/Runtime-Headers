@class HMDHomeManager, HMFTimer, NSString, HMDMetricsPreferencesDebugManager, HMDEventCountersManager, NSDate;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate, HMDAggregationAnalysisEventContributing> {
    long long _launchInfoSubmissionState;
    NSDate *_processLaunchTime;
    NSDate *_processLastExitTime;
    NSString *_processExitType;
    NSString *_processExitReason;
    unsigned long long _numUncommittedRecords;
    unsigned long long _numUncommittedAndPushedRecords;
    NSString *_dataSyncStateAsString;
    double _timeIntervalSincePreviousProcessLaunch;
    unsigned long long _systemUptimeMillisecondsRecordedAtLaunch;
    unsigned long long _xpcMessageTransportReadyMilliseconds;
    unsigned long long _homeDataLoadedMilliseconds;
    unsigned long long _accountResolvedMilliseconds;
    unsigned long long _millisecondsSinceLaunchToDataSyncStateGood;
    BOOL _configurationLoaded;
    BOOL _processLaunchInfoEventSubmitted;
}

@property (weak) HMDHomeManager *homeManager;
@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDMetricsPreferencesDebugManager *preferencesDebugManager;
@property (readonly) HMFTimer *submitProcessLaunchInfoTimer;
@property (readonly) double processRelaunchEventTimeIntervalThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)updateProcessLaunchInfoFromDisk;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)handleAccountResolvedEvent:(id)a0;
- (void)handleArchiveReplayLogEvent:(id)a0;
- (void)handleDataSyncStateUpdateLogEvent:(id)a0;
- (void)handleExitContextForHomed:(id)a0;
- (void)handleProcessLaunchLogEvent:(id)a0;
- (void)handleXPCMessageTransportStartedEvent:(id)a0;
- (void)homeKitConfigurationChangedWithHomeManager:(id)a0;
- (id)initWithProcessLaunchInfoTimer:(id)a0 dataSource:(id)a1 preferencesDebugManager:(id)a2;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)submitMigrationLogEvent;
- (void)submitProcessLaunchEventWithCurrentAnalysis;
- (void)submitProcessLaunchInfoEventPendingAllConditions;

@end
