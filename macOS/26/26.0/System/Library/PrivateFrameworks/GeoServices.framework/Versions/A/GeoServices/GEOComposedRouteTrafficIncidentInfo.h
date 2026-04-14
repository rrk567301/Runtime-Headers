@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEORouteIncident *incident;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int index; float offset; } routeCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
