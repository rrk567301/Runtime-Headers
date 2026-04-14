@class NSString, GEOComposedRouteEVChargingStationInfo;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {
    NSString *_name;
    unsigned long long _muid;
    struct { double latitude; double longitude; double altitude; } _coordinate;
    id<GEOTransitArtworkDataSource> _artwork;
    BOOL _isServerProvidedWaypoint;
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })coordinate;
- (unsigned long long)muid;
- (id)artwork;
- (id)chargingInfo;
- (BOOL)isServerProvidedWaypoint;
- (id)initWithGeoWaypointInfo:(id)a0 mapItem:(id)a1;
- (id)initWithGeoWaypointInfo:(id)a0;

@end
