@class NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CLMapHelperService : NSObject <CLMapHelperServiceProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL fHasEntitlementForRoadData;
    BOOL fHasEntitlementForBuildingData;
    NSObject<OS_os_transaction> *fTransaction;
    BOOL fRoadDataRequestInProgress;
    BOOL fExternalSignalReceivedToStopConstructVehicularRouteProcessing;
    BOOL fEnableDebugLogging;
}

- (id)init;
- (void)releaseOSTransaction;
- (void)cancelRoadDataRequest;
- (void)clearMemoryAndExitCleanly;
- (void)constructRouteFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 roadID:(unsigned long long)a1 clRoadID:(unsigned long long)a2 projection:(double)a3 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a4 toRoadID:(unsigned long long)a5 toCLRoadID:(unsigned long long)a6 toProjection:(double)a7 maxRouteLength:(double)a8 allowNetwork:(BOOL)a9 preferCachedTiles:(BOOL)a10 isPedestrianOrCycling:(BOOL)a11 clearTiles:(BOOL)a12 iOSTime:(double)a13 familiarityData:(id)a14 useMapsAPIForIntersectionQuery:(BOOL)a15 withReply:(id /* block */)a16;
- (id)convertCLMapRoadVectorToRoadDictionaryArray:(void *)a0;
- (void)fetchGEOBuildingDataAroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 inRadius:(double)a1 tileSetStyle:(int)a2 allowNetwork:(BOOL)a3 preferCachedTiles:(BOOL)a4 clearTiles:(BOOL)a5 withReply:(id /* block */)a6;
- (BOOL)fetchGEOMapFeatureRoadDataAtIntersectionOf:(id)a0 allowNetwork:(BOOL)a1 preferCachedTiles:(BOOL)a2 isPedestrianOrCycling:(BOOL)a3 clearTiles:(BOOL)a4 returnRoads:(id *)a5;
- (void)fetchGEORoadDataAroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 inRadius:(double)a1 allowNetwork:(BOOL)a2 preferCachedTiles:(BOOL)a3 isPedestrianOrCycling:(BOOL)a4 clearTiles:(BOOL)a5 withReply:(id /* block */)a6;
- (BOOL)fetchGEORoadDataAtIntersectionOf:(struct shared_ptr<CLMapRoad> { struct CLMapRoad *x0; struct __shared_weak_count *x1; })a0 allowNetwork:(BOOL)a1 preferCachedTiles:(BOOL)a2 isPedestrianOrCycling:(BOOL)a3 clearTiles:(BOOL)a4 ignoreUTurns:(BOOL)a5 returnRoads:(void *)a6;
- (struct shared_ptr<CLMapRoad> { struct CLMapRoad *x0; struct __shared_weak_count *x1; })getCLMapRoadForLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 roadID:(unsigned long long)a1 clRoadID:(unsigned long long)a2 allowNetwork:(BOOL)a3 preferCachedTiles:(BOOL)a4 isPedestrianOrCycling:(BOOL)a5 clearTiles:(BOOL)a6 gmfRoad:(id *)a7;
- (BOOL)getGEOMapFeatureRoadDataAroundLatitude:(double)a0 longitude:(double)a1 inRadius:(double)a2 allowNetwork:(BOOL)a3 preferCachedTiles:(BOOL)a4 isPedestrianOrCycling:(BOOL)a5 clearTiles:(BOOL)a6 returnRoads:(id)a7;
- (id)internalConstructVehicularRouteFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 roadID:(unsigned long long)a1 clRoadID:(unsigned long long)a2 projection:(double)a3 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a4 toRoadID:(unsigned long long)a5 toCLRoadID:(unsigned long long)a6 toProjection:(double)a7 maxRouteLength:(double)a8 allowNetwork:(BOOL)a9 preferCachedTiles:(BOOL)a10 isPedestrianOrCycling:(BOOL)a11 clearTiles:(BOOL)a12 iOSTime:(double)a13 familiarityData:(id)a14 useMapsAPIForIntersectionQuery:(BOOL)a15;
- (BOOL)makeIntersectionQueryCallUsingMapsAPIFor:(id)a0 allowNetwork:(BOOL)a1 preferCachedTiles:(BOOL)a2 isPedestrianOrCycling:(BOOL)a3 clearTiles:(BOOL)a4 returnRoads:(id *)a5;
- (void)setEntitlementsForBuilding:(BOOL)a0;
- (void)setEntitlementsForRoad:(BOOL)a0;
- (void)stopConstructRouteFromLocation;
- (void)takeOSTransaction;

@end
