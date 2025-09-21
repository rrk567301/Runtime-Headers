@class RTDefaultsManager, NSMutableDictionary, RTTripClusterProcessorOptions;

@interface RTTripClusterProcessor : NSObject {
    NSMutableDictionary *_debuggingData;
}

@property (retain, nonatomic) RTTripClusterProcessorOptions *options;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

+ (double)calculateDTWDistanceBetweenTrip1:(id)a0 trip2:(id)a1 windowSize:(unsigned long long)a2;
+ (id)getCLTripSegmentRoadDataFromArrayOfRTTripClusterRoute:(id)a0;
+ (double)getCourseBetweenLat1:(double)a0 lon1:(double)a1 lat2:(double)a2 lon2:(double)a3;
+ (id)getWaypointIDFromClusterID:(id)a0;
+ (double)haversineDistanceBetweenPoints_km:(double)a0 lon1:(double)a1 lat2:(double)a2 lon2:(double)a3;
+ (void)sortRoadTransitionStoreBySequenceNumberAscending:(id *)a0;
+ (BOOL)uTurnFlagFromCourseAccuracy:(double)a0;

- (void).cxx_destruct;
- (void)_collectClusterMetric:(id)a0 cluster:(id)a1 dtwForUnmatchedTripAvg:(double)a2 dtwForMatchedTripAvg:(double)a3 tripClusterStore:(id)a4 tripSegment:(id)a5 tripClusterRoute:(id)a6 clusterStartTime:(id)a7;
- (void)_updateWalkAndBikeClustersForCommuteID:(id)a0 fetchedClusters:(id)a1 walkAndBikeTripStats:(id)a2 startLatitude:(double)a3 startLongitude:(double)a4 endLatitude:(double)a5 endLongitude:(double)a6 lastTimeTaken:(id)a7 tripClusterStore:(id)a8;
- (void)createAndStoreNewClusterForTripSegment:(id)a0 tripDuration:(double)a1 tripDistance:(double)a2 tripClusterStore:(id)a3 tripClusterRecencyStore:(id)a4 tripClusterRouteStore:(id)a5 tripClusterWaypointStore:(id)a6 tripClusterRouteTransitionsStore:(id)a7 tripClusterScheduleStore:(id)a8 withRoadTransitions:(id)a9 tripClusterCommuteID:(id)a10;
- (id)getCLTripSegmentProcessorOptions;
- (double)getDistanceToRoadFromLatitude:(double)a0 longitude:(double)a1 roadStart:(id)a2 roadEnd:(id)a3;
- (BOOL)getSimulatedLocationOnRoute:(id)a0 convertedRoutes:(id)a1 cluster:(id)a2;
- (void)getTripClusterRouteAsArrayOfRoadStartAndStopCoordinates:(id)a0 decimatedTripClusterRoute:(id *)a1;
- (id)initWithOptions:(id)a0 defaultsManager:(id)a1;
- (BOOL)isTripSegmentValidForClustering:(id)a0 locationsArray:(id)a1;
- (void)processTripSegment:(id)a0 locationsArray:(id)a1 tripClusterStore:(id)a2 tripClusterRouteStore:(id)a3 tripClusterWaypointStore:(id)a4 tripClusterRouteRoadTransitionsStore:(id)a5 tripClusterRecencyStore:(id)a6 tripClusterScheduleStore:(id)a7 tripSegmentRoadTransitionsStore:(id)a8 walkAndBikeTripStats:(id)a9 tripSegmentRoadTransitions:(id)a10 tripDuration:(double)a11;
- (void)processTripSegmentStatsWithNoDrive:(id)a0 tripClusterStore:(id)a1 tripClusterRouteStore:(id)a2 originLatitude:(double)a3 originLongitude:(double)a4 destLatitude:(double)a5 destLongitude:(double)a6 lastTimeTaken:(id)a7;
- (BOOL)updateClusterRoadTransitionsForClusterID:(id)a0 usingTripSegment:(id)a1 withTransitions:(id)a2 tripClusterRoadTransitionsStore:(id)a3 tripClusterRouteStore:(id)a4 tripClusterStore:(id)a5 tripClusterWaypointStore:(id)a6 startLat:(double)a7 startLon:(double)a8 endLat:(double)a9 endLon:(double)a10 traversalCount:(int)a11;
- (BOOL)updateClusterRouteUsingClusterRoadTransitionsWithClusterID:(id)a0 tripClusterStore:(id)a1 tripClusterRouteStore:(id)a2 tripClusterWaypointStore:(id)a3 tripClusterRouteTransitionsStore:(id)a4 startLat:(double)a5 startLon:(double)a6 endLat:(double)a7 endLon:(double)a8 traversalCount:(int)a9;

@end
