@class GEOComposedRoute, NSArray, GEODirectionsRequest, GEODirectionsResponse;

@interface GEORouteBuilder_ConvertToNavigableRoute : GEORouteBuilderBase

@property (copy, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) GEOComposedRoute *sourceRoute;

- (void).cxx_destruct;
- (id)_newRouteInstance;
- (char)_setMiscInfo;
- (int)_transportType;

@end
