@class HMDEventCountersManager;
@protocol HMMRadarInitiating;

@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) id<HMMRadarInitiating> radarInitiator;

+ (id)managedEventCounterRequestGroups;

- (unsigned long long)peakProcessMemoryKBForDate:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;
- (void)observeEvent:(id)a0;
- (unsigned long long)averageProcessMemoryKBForDate:(id)a0;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)resetAggregationAnalysisContext;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
