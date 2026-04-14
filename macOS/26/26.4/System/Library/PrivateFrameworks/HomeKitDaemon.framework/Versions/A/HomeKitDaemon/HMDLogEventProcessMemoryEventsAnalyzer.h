@class HMDEventCountersManager;
@protocol HMMRadarInitiating;

@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) id<HMMRadarInitiating> radarInitiator;

+ (id)managedEventCounterRequestGroups;

- (id)initWithDataSource:(id)a0;
- (unsigned long long)averageProcessMemoryKBForDate:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void).cxx_destruct;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (unsigned long long)peakProcessMemoryKBForDate:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)observeEvent:(id)a0;

@end
