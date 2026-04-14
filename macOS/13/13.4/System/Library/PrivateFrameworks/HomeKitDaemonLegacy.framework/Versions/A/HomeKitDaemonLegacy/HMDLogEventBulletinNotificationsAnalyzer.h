@class NSString, HMDEventCounterGroup, HMDCounterThresholdTTRTrigger;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventBulletinNotificationsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *topicEventGroup;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *homeHubReachabilityTTRTrigger;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *cameraReachabilityTTRTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)resetAggregationAnalysisContext;
- (long long)cameraReachabilityThresholdFromConfiguration:(id)a0;
- (void)configurationChanged:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)runDailyTask;

@end
