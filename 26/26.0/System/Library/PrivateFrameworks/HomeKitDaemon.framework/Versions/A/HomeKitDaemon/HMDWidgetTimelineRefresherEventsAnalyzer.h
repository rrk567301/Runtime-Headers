@class NSString, NSMutableDictionary, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDWidgetTimelineRefresherEventsAnalyzer : HMDLogEventAnalyzer <HMMDailyTaskRunner, HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSMutableDictionary *widgetRefreshReasonCounterGroupByKind;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runDailyTask;
- (void)resetAggregationAnalysisContext;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 widgetKinds:(id)a2 dailyScheduler:(id)a3;

@end
