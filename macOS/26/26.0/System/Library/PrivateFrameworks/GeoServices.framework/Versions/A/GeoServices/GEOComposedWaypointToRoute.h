@class GEOComposedRoute;

@interface GEOComposedWaypointToRoute : GEOComposedWaypoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOComposedRoute *route;

- (id)initWithRoute:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)geoWaypointTyped;

@end
