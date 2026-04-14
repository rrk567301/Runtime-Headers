@class NSArray, NSString, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>

@property (class, readonly) NSArray *errorEventsRequestGroupKeys;

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)runDailyTask;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (id)eventCounterNameForError:(id)a0;
- (id)eventCounterRequestGroupNameForLogEvent:(id)a0;
- (void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)a0 logEventUnderlyingErrorGroupName:(id)a1;
- (void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)a0 logEventUnderlyingErrorGroupName:(id)a1;
- (id)currentErrorEventsAnalyzedSummary;
- (void)submitAllFormattedErrorAggregationLogEvents;
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)a0;
- (void)resetEventCountersForAllErrorEventRequestGroups;

@end
