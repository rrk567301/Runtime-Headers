@class GEOComposedRoute, GEONavigationRouteTransitSummary, GEOLocation, GEOArrivalTimeAndDistanceInfo, GEONavigationRouteSummary, GEONavigationGuidanceState, GEONameInfo;

@interface GeoServices.GEONavigationListenerDetails : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL isResumingMultipointRoute;
@property (nonatomic, retain) GEOLocation *lastLocation;
@property (nonatomic) struct { unsigned int x0; float x1; } lastRouteMatchedCoordinate;
@property (nonatomic) long long stepIndex;
@property (nonatomic, retain) GEONameInfo *stepNameInfo;
@property (nonatomic, retain) GEOArrivalTimeAndDistanceInfo *timeAndDistanceInfo;
@property (nonatomic) struct { double x0; double x1; } positionFromSign;
@property (nonatomic) struct { double x0; double x1; } positionFromManeuver;
@property (nonatomic) struct { double x0; double x1; } positionFromDestination;
@property (nonatomic) int navigationVoiceVolume;
@property (nonatomic, retain) GEONavigationRouteSummary *routeSummary;
@property (nonatomic, retain) GEONavigationRouteTransitSummary *transitSummary;
@property (nonatomic, retain) GEONavigationGuidanceState *guidanceState;

- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end
