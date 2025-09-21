@class GEORouteMatcher, GEONavigationMatchResult, GEORoadMatcher, GEOLocationShifter, GEOApplicationAuditToken, GEOComposedRoute;

@interface GEONavigationMapMatcher : NSObject {
    char _requiresRoadNetworkData;
    char _shouldSnapRouteMatchToRoute;
    char _shouldWaitForSnappedSegments;
}

@property (retain, nonatomic) GEORouteMatcher *routeMatcher;
@property (retain, nonatomic) GEORoadMatcher *roadMatcher;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;
@property (retain, nonatomic) GEONavigationMatchResult *previousMatchResult;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) char isSimulation;

- (void).cxx_destruct;
- (int)transportType;
- (void)setShouldSnapRouteMatchToRoute:(char)a0;
- (id)_routeMatcherForRoute:(id)a0;
- (id)initWithRoute:(id)a0 auditToken:(id)a1;
- (id)matchLocation:(id)a0 transportType:(int)a1;
- (void)resetToLocation:(id)a0;
- (void)setRequiresRoadNetworkData:(char)a0;
- (void)setShouldWaitForSnappedSegments:(char)a0;
- (id)updateForReroute:(id)a0 location:(id)a1 routeStartsFromLocation:(char)a2;

@end
