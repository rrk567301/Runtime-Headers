@class HMDTimeBasedFlagsManager, HMDLogEventErrorEventsAnalyzer, HMDConfigurationLogEvent, HMDLogEventProcessMemoryEventsAnalyzer, NSMutableArray, HMDLogEventMessageEventsAnalyzer, HMDLogEventAccessoryFirmwareUpdateEventAnalyzer, HMDCloudSyncLogEventsAnalyzer, HMDMessageDispatcher, HMDHomeManager, NSString, HMDLogEventReachabilityEventsAnalyzer, HMDPowerLogObserver, HMDDiagnosticReporterLogObserver, HMDCoreAnalyticsLogObserver, HMDCoreDataLogEventsAnalyzer, HMDLogEventDailyScheduler, NSObject, HMDLogEventElectionEventsAnalyzer, HMDLogEventProcessLaunchAnalyzer, HMDHouseholdMetricsManager, HMDLogEventUserActivityAnalyzer, HMDEventCountersManager, HMDLogEventBulletinNotificationsAnalyzer, HMDLogEventHAPMetricsEventAnalyzer, NSUUID;
@protocol HMDEWSLogging, OS_dispatch_queue, HMMLogEventSubmitting, HMMLogEventDispatching;

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyTaskRunner, HMMLogEventDispatchingDataSource, HMDCoreAnalyticsLogObserverDataSource, HMDHouseholdMetricsDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, copy) NSUUID *namespaceUUID;

@property BOOL metricsCollectionStarted;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;
@property (readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver;
@property (readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager;
@property (readonly, nonatomic) HMDDiagnosticReporterLogObserver *diagnosticReporterLogObserver;
@property (readonly, nonatomic) HMDPowerLogObserver *powerLogObserver;
@property (readonly, nonatomic) HMDLogEventBulletinNotificationsAnalyzer *bulletinNotificationsAnalyzer;
@property (readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer;
@property (readonly, nonatomic) HMDCoreDataLogEventsAnalyzer *coreDataLogEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer;
@property (readonly, nonatomic) HMDLogEventAccessoryFirmwareUpdateEventAnalyzer *firmwareUpdateEventsAnalyzer;
@property (readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) BOOL isDemoModeConfigured;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, weak, nonatomic) id<HMDEWSLogging> ewsLogger;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isSubmissionEnabled;
@property (readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
@property (readonly, nonatomic) NSString *PRKitUUIDString;
@property (readonly, nonatomic) NSString *PRKitDateString;

- (id)init;
- (void).cxx_destruct;
- (id)homes;
- (id)messageDestination;
- (void)_registerForMessages;
- (void)runDailyTask;
- (void)_handleFetchEventCounters:(id)a0;
- (void)_handleResetEventCounters:(id)a0;
- (void)_handleLogEventDailySchedulerStatusRequest:(id)a0;
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)a0;
- (id)cachedHomeConfigurationForHomeUUID:(id)a0;
- (id)currentDeviceProductInfo;
- (id)devicesOnCurrentAccount;
- (id)initWithMessageDispatcher:(id)a0 logEventDispatcher:(id)a1 dailyScheduler:(id)a2 countersManager:(id)a3 flagsManager:(id)a4 ewsLogger:(id)a5;
- (void)addAnalyzer:(id)a0 toListOfAggregationAnalysisEventContributing:(id)a1;
- (void)configureHAPMetricsDispatcher:(id)a0;
- (void)startMetricsCollection;
- (void)startMetricsCollectionWithDailyScheduler:(id)a0;
- (void)submitCurrentUserSettings;
- (void)submitDailyAggregationAnalysisEvents;
- (id)currentDataSyncStateDescription;
- (id)homeKitAggregationAnalysisLogEvent;
- (void)populateHomeKitAggregationAnalysisLogEvent:(id)a0;
- (void)resetHomeKitAggregationAnalysisContext;
- (id)logHomeKitAggregationAnalysisSummary;
- (id)logHomeKitErrorAggregationSummary;
- (void)homeKitConfigurationChanged;
- (void)updateWidgetStatusInCachedConfiguration;
- (void)logHomeConfiguration;
- (void)startCoreAnalyticsObserver:(id)a0;
- (void)startAnalyzers;
- (void)registerEWSTriggers;
- (void)addThresholdTrigger:(id)a0 forEventName:(id)a1 requestGroup:(id)a2 atThreshold:(unsigned long long)a3;
- (void)addThresholdTrigger:(id)a0 forEventName:(id)a1 requestGroup:(id)a2 atThreshold:(unsigned long long)a3 uploadImmediately:(BOOL)a4;
- (void)addRateTrigger:(id)a0 forEventName:(id)a1 requestGroup:(id)a2 atThreshold:(unsigned long long)a3 windowSize:(unsigned long long)a4;
- (void)presentRadarDialog:(id)a0 withPostIntervalLimit:(double)a1;

@end
