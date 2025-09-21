@class NSUUID, NSString, GEOMapItemIdentifier, GEOComposedWaypointDisplayInfo, GEOFeatureStyleAttributes;

@interface GEOComposedRouteAnchorPoint : GEOComposedWaypoint <NSCopying, NSSecureCoding> {
    char _isCurrentLocation;
    char _isCoordinate;
    char _isAddress;
    char _isCuratedRoute;
    unsigned long long _anchorPointType;
    GEOComposedWaypointDisplayInfo *_displayInfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isCurrentLocation;
@property (nonatomic) char isCoordinate;
@property (nonatomic) char isAddress;
@property (nonatomic) char isCuratedRoute;
@property (nonatomic) unsigned long long anchorPointType;
@property (retain, nonatomic) GEOComposedWaypointDisplayInfo *displayInfo;
@property (retain, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } locationCoordinate;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } routeCoordinate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) int mapDisplayType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) double elevation;
@property (readonly, nonatomic) char elevationIsValid;

+ (id)anchorPointWithCoordinate:(struct { double x0; double x1; double x2; })a0;
+ (id)anchorPointWithCoordinate:(struct { double x0; double x1; double x2; })a0 isCurrentLocation:(char)a1 name:(id)a2;
+ (id)anchorPointWithMapItem:(id)a0 coordinate:(struct { double x0; double x1; double x2; })a1;
+ (id)anchorPointWithMapItemIdentifier:(id)a0 coordinate:(struct { double x0; double x1; double x2; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)location;
- (struct { double x0; double x1; double x2; })coordinate;
- (id)initWithMapItem:(id)a0;
- (id)_defaultDisplayInfo;
- (void)_setElevationIfNecessaryForMapItem:(id)a0;
- (id)duplicateWithRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (id)initWithLocationCoordinate:(struct { double x0; double x1; double x2; })a0;
- (id)initWithLocationCoordinate:(struct { double x0; double x1; double x2; })a0 isCurrentLocation:(char)a1 name:(id)a2;
- (id)initWithMapItem:(id)a0 coordinate:(struct { double x0; double x1; double x2; })a1;
- (id)initWithMapItemIdentifier:(id)a0;
- (id)initWithMapItemIdentifier:(id)a0 coordinate:(struct { double x0; double x1; double x2; })a1;
- (id)initWithUniqueID:(id)a0 locationCoordinate:(struct { double x0; double x1; double x2; })a1 routeCoordinate:(struct { unsigned int x0; float x1; })a2;
- (char)isAddressWaypointType;
- (char)isLocationWaypointType;
- (void)refineWithMapItem:(id)a0;
- (id)updatedAnchorPointWithLocationCoordinate:(struct { double x0; double x1; double x2; })a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;

@end
