@class GEOComposedRoute, NSArray, GEODirectionsRequest, GEODirectionsResponse;

@interface GEORouteBuilder_ConvertToNavigableRoute : GEORouteBuilderBase

@property (copy, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) GEOComposedRoute *sourceRoute;

- (void).cxx_destruct;
- (int)_transportType;
- (id)_newRouteInstance;
- (BOOL)_setMiscInfo;

@end
