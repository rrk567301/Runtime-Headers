@class NSArray, GEOETATrafficUpdateResponse, GEODirectionsRequest, GEORouteAttributes, GEODirectionsResponse;

@interface GEORouteInitializerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEODirectionsRequest *directionsRequest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)incidentAtIndex:(unsigned long long)a0 forGeoRoute:(id)a1;
- (id)incidentAtIndex:(unsigned long long)a0 forGeoWaypointRoute:(id)a1;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2;
- (id)arrivalParametersAtIndex:(unsigned long long)a0;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 directionsResponse:(id)a2 directionsRequest:(id)a3;
- (id)initWithWaypoints:(id)a0 routeAttributes:(id)a1 ETATrafficUpdateResponse:(id)a2;

@end
