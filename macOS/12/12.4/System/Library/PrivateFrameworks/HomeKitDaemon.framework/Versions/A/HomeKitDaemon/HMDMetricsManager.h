@class HMDLogEventErrorEventsAnalyzer, HMDConfigurationLogEvent, HMDLogEventProcessMemoryEventsAnalyzer, NSMutableArray, HMDLogEventMessageEventsAnalyzer, HMDHomeManager, HMDCloudSyncLogEventsAnalyzer, HMDEventFlagsManager, HMDMessageDispatcher, HMDLogEventDispatcher, HMDLogEventReachabilityEventsAnalyzer, NSArray, NSString, HMDCoreAnalyticsLogObserver, HMDLogEventDailyScheduler, NSObject, HMDLogEventElectionEventsAnalyzer, HMDLogEventProcessLaunchAnalyzer, HMDLogEventUserActivityAnalyzer, HMDHouseholdMetricsManager, HMDEventCountersManager, NSUUID, HMDLogEventHAPMetricsEventAnalyzer, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyProvider, HMDHouseholdMetricsDataSource> {
    HMFUnfairLock *_lock;
}

@property (class, readonly, nonatomic) NSArray *coreAnalyticsLogEventClasses;
@property (class, readonly, copy) NSUUID *namespaceUUID;

@property BOOL metricsCollectionStarted;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly, nonatomic) HMDEventCountersManager *eventCounters;
@property (readonly, nonatomic) HMDEventFlagsManager *eventFlags;
@property (readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver;
@property (readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager;
@property (readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer;
@property (readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
@property (readonly, nonatomic) NSString *PRKitUUIDString;
@property (readonly, nonatomic) NSString *PRKitDateString;
@property (readonly) BOOL demoModeConfigured;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

- (id)init;
- (void).cxx_destruct;
- (id)homes;
- (id)messageDestination;
- (void)_registerForMessages;
- (void)startMetricsCollection;
- (void)configureHAPMetricsDispatcher:(id)a0;
- (id)currentDeviceProductInfo;
- (id)devicesOnCurrentAccount;
- (id)initWithMessageDispatcher:(id)a0 logEventDispatcher:(id)a1 dailyScheduler:(id)a2 eventCounters:(id)a3 eventFlags:(id)a4;
- (void)addAnalyzer:(id)a0 toListOfAggregationAnalysisEventContributing:(id)a1;
- (void)_handleFetchEventCounters:(id)a0;
- (void)_handleResetEventCounters:(id)a0;
- (void)_handleLogEventDailySchedulerStatusRequest:(id)a0;
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)a0;
- (void)startMetricsCollectionWithDailyScheduler:(id)a0;
- (void)startAnalyzers;
- (void)registerTriggers;
- (void)startCoreAnalyticsObserver:(id)a0;
- (void)submitDailyAggregationAnalysisEvents;
- (id)homeKitAggregationAnalysisLogEvent;
- (void)resetHomeKitAggregationAnalysisContext;
- (void)presentRadarDialog:(id)a0 withPostIntervalLimit:(double)a1;
- (id)currentDataSyncStateDescription;
- (void)populateHomeKitAggregationAnalysisLogEvent:(id)a0;
- (void)addThresholdTrigger:(id)a0 forEventName:(id)a1 requestGroup:(id)a2 atThreshold:(unsigned long long)a3;
- (void)addRateTrigger:(id)a0 forEventName:(id)a1 requestGroup:(id)a2 atThreshold:(unsigned long long)a3 windowSize:(unsigned long long)a4;
- (id)logHomeKitAggregationAnalysisSummary;
- (id)logHomeKitErrorAggregationSummary;
- (void)homeKitConfigurationChanged;
- (void)logHomeConfiguration;

@end
