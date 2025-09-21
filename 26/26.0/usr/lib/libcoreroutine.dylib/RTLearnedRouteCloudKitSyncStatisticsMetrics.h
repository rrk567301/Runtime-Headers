@interface RTLearnedRouteCloudKitSyncStatisticsMetrics : NSObject

@property int numEntriesTripClusterMO;
@property int numEntriesTripClusterRecencyMO;
@property int numEntriesTripClusterRoadTransitionsMO;
@property int numEntriesTripClusterRouteMO;
@property int numEntriesTripClusterScheduleMO;
@property int numTransactionsTripClusterRoadTransitionsMO;

- (id)init;
- (id)initForDefaultMetric;

@end
