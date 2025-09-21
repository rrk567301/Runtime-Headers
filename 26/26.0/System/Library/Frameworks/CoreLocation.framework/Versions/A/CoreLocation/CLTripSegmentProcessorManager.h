@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CLTripSegmentProcessorManager : NSObject {
    NSObject<OS_dispatch_queue> *fQueue;
    struct CLTripSegmentProcessor { struct CLDistanceCalc { double fM; double fN; double fRefLatRads; double fRefLatDegs; double fCosRefLat; } fDistanceCalculator; struct CLTripSegmentRecorder { BOOL fRecordingEnabled; BOOL fFileNameShouldContainTime; NSString *fRecordingDirectory; } fRecorder; } cltsp;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void)cancelMapHelperRoadDataRequest;
- (void)clearMapHelperMemoryAndExitCleanly;
- (id)constructRouteWithID:(id)a0 withOptions:(id)a1 usingRoadData:(id)a2 startRoad:(id)a3 endRoad:(id)a4 modeOfTransport:(long long)a5 outputHandler:(id /* block */)a6;
- (void)constructRouteWithID:(id)a0 withOptions:(id)a1 usingRoadData:(id)a2 startRoad:(id)a3 endRoad:(id)a4 modeOfTransport:(long long)a5 outputHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)errorObject:(long long)a0 description:(id)a1;
- (id)generateWaypointsOnTheRoute:(id)a0 forRouteID:(id)a1 withOptions:(id)a2 modeOfTransport:(long long)a3 outputHandler:(id /* block */)a4;
- (void)generateWaypointsOnTheRoute:(id)a0 forRouteID:(id)a1 withOptions:(id)a2 modeOfTransport:(long long)a3 outputHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)getMatchedLocationCandidates:(id)a0 dataID:(id)a1 modeOfTransport:(long long)a2 options:(id)a3 outputHandler:(id /* block */)a4;
- (void)getMatchedLocationCandidates:(id)a0 dataID:(id)a1 modeOfTransport:(long long)a2 options:(id)a3 outputHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)getWaypointsSubsetFromSnapPointOnRoute:(id)a0 modeOfTransport:(long long)a1 snapLocation:(id)a2 snapRoad:(id)a3 waypoints:(id)a4 routeID:(id)a5 withOptions:(id)a6 outputHandler:(id /* block */)a7;
- (void)killProcessingWithID:(id)a0;
- (id)matchLocations:(id)a0 toRoute:(id)a1 waypoints:(id)a2 withOptions:(id)a3 andRouteID:(id)a4 modeOfTransport:(long long)a5 outputHandler:(id /* block */)a6;
- (void)matchLocations:(id)a0 toRoute:(id)a1 waypoints:(id)a2 withOptions:(id)a3 andRouteID:(id)a4 modeOfTransport:(long long)a5 outputHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)matchLocations:(id)a0 toRoute:(id)a1 withOptions:(id)a2 andRouteID:(id)a3 modeOfTransport:(long long)a4 outputHandler:(id /* block */)a5;
- (void)outputRouteLearningDebuggingDataInCLTSPFile:(id)a0;
- (id)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2;
- (void)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)propagateLocation:(id)a0 route:(id)a1 distance:(double)a2 withOptions:(id)a3 modeOfTransport:(long long)a4 outputHandler:(id /* block */)a5;
- (void)propagateLocation:(id)a0 route:(id)a1 distance:(double)a2 withOptions:(id)a3 modeOfTransport:(long long)a4 outputHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)simulateLocationOnRouteID:(id)a0 withOptions:(id)a1 usingRoadData:(id)a2 modeOfTransport:(long long)a3 constantSpeed:(double)a4 outputHandler:(id /* block */)a5;
- (void)simulateLocationOnRouteID:(id)a0 withOptions:(id)a1 usingRoadData:(id)a2 modeOfTransport:(long long)a3 constantSpeed:(double)a4 outputHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)simulateSparseTrajectoryAndSubmitCoreAnalytics:(id)a0;

@end
