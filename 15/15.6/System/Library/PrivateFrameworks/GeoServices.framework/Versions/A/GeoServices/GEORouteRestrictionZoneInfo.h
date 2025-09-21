@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *zoneIDs;
@property (readonly, nonatomic) int restrictionZoneImpact;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoRoute:(id)a0;
- (id)initWithGeoWaypointRoute:(id)a0;

@end
