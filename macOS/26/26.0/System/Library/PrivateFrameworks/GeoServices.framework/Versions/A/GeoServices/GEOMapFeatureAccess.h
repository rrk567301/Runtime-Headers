@class GEOTileLoader, GEOApplicationAuditToken, GEOTilePool, NSObject, GEOVectorTileDecoder;
@protocol OS_dispatch_queue;

@interface GEOMapFeatureAccess : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOTileLoader *_tileLoader;
    double _syncTimeout;
    BOOL _hasCustomTileLoader;
    unsigned long long _memoryCacheCountLimit;
    unsigned long long _memoryCacheCostLimit;
    GEOTilePool *_tileCache;
    GEOVectorTileDecoder *_tileDecoder;
}

@property (nonatomic) double syncTimeout;
@property (nonatomic) BOOL joinAllRoadsByMuid;
@property (nonatomic) BOOL cachedTilesCallbackImmediately;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL allowNetworkTileLoad;
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;
@property (nonatomic) BOOL allowStaleData;
@property (nonatomic) BOOL preferStaleData;
@property (nonatomic) BOOL allowOfflineData;

+ (struct { int x0; unsigned int x1; })tileSetInfoForStyle:(int)a0 scale:(int)a1;

- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 tileSetStyle:(int)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findRoadsToPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)synchronousFindRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1;
- (id)findTransitHallForStop:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitStopsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0;
- (id)synchronousFindRoadWithID:(unsigned long long)a0;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 tileSetStyle:(int)a2 preloadToDiskOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_requestParameters;
- (id)findTransitGeometryForPoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 pointHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_findParentOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitStationsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitAccessPointsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRunningTracksNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)synchronousFindRoadsFromPreviousIntersectionOf:(id)a0;
- (void)preloadTransitTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 memoryCacheCountLimit:(unsigned long long)a1 memoryCacheCostLimit:(unsigned long long)a2;
- (void)_clearStandardTilesWithType:(int)a0;
- (id)findTransitStopsForHall:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRaytracingDataNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)clearBuildingTiles;
- (void)clearTransitTiles;
- (id)init;
- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)roadTileKeysNear:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findRoadsFromPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadsToNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)preloadRoadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (id)findTransitHallsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id /* block */)_openTileLoaderWithCompletionHandler:(id /* block */)a0;
- (id)_findChildrenOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_findTransitPointsOfType:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 radius:(double)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)preloadTransitTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (id)synchronousFindRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1;
- (void)clearRunningTrackTiles;
- (id)findTransitLinksNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitStationForHall:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadsFromJunction:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)clearRoadTiles;
- (void)preloadRoadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsFromNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitHallsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (id)findRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)synchronousFindRoadsFromNextIntersectionOf:(id)a0;
- (id)findRoadWithID:(unsigned long long)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRunningTrackFlagsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsToJunction:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)clearAllTiles;
- (id)synchronousFindRoadsToNextIntersectionOf:(id)a0;
- (void)_preloadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 tileSetStyle:(int)a3 tileScale:(int)a4 completionHandler:(id /* block */)a5;
- (id)findAllRoadsAtNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)synchronousFindRoadsToPreviousIntersectionOf:(id)a0;
- (void).cxx_destruct;
- (id)_synchronousFindWithHandler:(id /* block */)a0;
- (id)findAllRoadsAtPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
