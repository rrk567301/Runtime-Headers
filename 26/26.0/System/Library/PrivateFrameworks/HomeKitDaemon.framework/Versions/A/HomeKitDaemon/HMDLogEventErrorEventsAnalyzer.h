@class NSArray, NSString, HMDEventCountersManager;
@protocol HMMLogEventSubmitting, HMDLogEventAnalyzerDataSource;

@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMMDailyTaskRunner>

@property (class, readonly) NSArray *errorEventsRequestGroupKeys;

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDLogEventAnalyzerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;
+ (id)eventCounterNameForError:(id)a0;

- (void)runDailyTask;
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)a0;
- (id)errorEventsAnalyzedSummaryForDate:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)a0 logEventUnderlyingErrorGroupName:(id)a1;
- (void)submitAllFormattedErrorAggregationLogEvents;
- (void)observeEvent:(id)a0;
- (void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)a0 logEventUnderlyingErrorGroupName:(id)a1;
- (void)resetEventCountersForAllErrorEventRequestGroups;
- (id)eventCounterRequestGroupNameForLogEvent:(id)a0;
- (void).cxx_destruct;

@end
