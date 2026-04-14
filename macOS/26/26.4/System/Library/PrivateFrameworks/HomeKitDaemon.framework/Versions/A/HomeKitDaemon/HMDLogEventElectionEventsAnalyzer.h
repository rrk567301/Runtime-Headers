@class HMDEventCounterGroup;

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property BOOL isCurrentDeviceInSecondaryResidentCoordinationMesh;
@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;

+ (id)managedEventCounterRequestGroups;

- (id)initWithDataSource:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void).cxx_destruct;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)observeEvent:(id)a0;

@end
