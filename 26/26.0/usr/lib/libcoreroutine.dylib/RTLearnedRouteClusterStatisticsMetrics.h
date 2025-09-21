@interface RTLearnedRouteClusterStatisticsMetrics : NSObject

@property float clusterProcessingRunTimeAvg;
@property float clusterProcessingRunTimeMax;
@property float dtwForMatchedTripAvg;
@property float dtwForMatchedTripMax;
@property float dtwForUnmatchedTripAvg;
@property float dtwForUnmatchedTripMax;
@property float dtwForUnmatchedTripMin;
@property float routeLengthAvg;
@property float routeLengthMax;
@property float tripsToFormLearnedRouteAvg;
@property int tripsToFormLearnedRouteMax;
@property float waypointCountAvg;
@property float waypointCountMax;
@property int numOfDaysSinceClusterTraversalMax;
@property int numClustersBetweenODPairMax;
@property int numRoadsDifferenceBetweenTripSegmentAndLearnedRoute;
@property int learningPipelineDeferralCount;
@property float tspRunTimeAvg;
@property float tspRunTimeMax;

- (id)init;
- (id)initForDefaultMetric;

@end
