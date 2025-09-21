@class NSString, GEOComposedRouteEVChargingStationInfo;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {
    NSString *_name;
    unsigned long long _muid;
    struct { double latitude; double longitude; double altitude; } _coordinate;
    id<GEOTransitArtworkDataSource> _artwork;
    char _isServerProvidedWaypoint;
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}

@property (class, readonly) char supportsSecureCoding;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; double x2; })coordinate;
- (unsigned long long)muid;
- (id)artwork;
- (id)chargingInfo;
- (id)geoWaypointTyped;
- (id)initWithGeoWaypointInfo:(id)a0;
- (id)initWithGeoWaypointInfo:(id)a0 mapItem:(id)a1;
- (char)isServerProvidedWaypoint;

@end
