@class HMDEventCounterGroup;

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property BOOL isCurrentDeviceInSecondaryResidentCoordinationMesh;
@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;

+ (id)managedEventCounterRequestGroups;

- (void)observeEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
