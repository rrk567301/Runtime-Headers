@class GEOTileLoader, GEOApplicationAuditToken, GEOTilePool, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOMapFeatureAccessRequestParameters : NSObject {
    BOOL allowNetworkTileLoad;
    BOOL flipNegativeTravelDirectionRoads;
    BOOL visitDoubleTravelDirectionRoadsTwice;
    BOOL allowStaleData;
    BOOL preferStaleData;
    BOOL joinAllRoadsByMuid;
    BOOL cachedTilesCallbackImmediately;
    BOOL _allowOfflineData;
    GEOTileLoader *tileLoader;
    GEOTilePool *cache;
    NSObject<OS_dispatch_queue> *queue;
    GEOApplicationAuditToken *auditToken;
}

- (void).cxx_destruct;

@end
