@class GEOApplicationAuditToken, GEOTileLoader, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOMapFeatureAccessRequestParameters : NSObject {
    char allowNetworkTileLoad;
    char flipNegativeTravelDirectionRoads;
    char visitDoubleTravelDirectionRoadsTwice;
    char allowStaleData;
    char preferStaleData;
    char joinAllRoadsByMuid;
    char cachedTilesCallbackImmediately;
    char _allowOfflineData;
    GEOTileLoader *tileLoader;
    NSObject<OS_dispatch_queue> *queue;
    GEOApplicationAuditToken *auditToken;
}

- (void).cxx_destruct;

@end
