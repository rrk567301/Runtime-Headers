@class VKCameraRegionRestriction;

@interface MKMapCameraBoundary : NSObject <NSSecureCoding, NSCopying> {
    VKCameraRegionRestriction *_vkRestriction;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=_isEmpty) char _empty;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (char)isValidMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_clampedCoordinateForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_clampedCoordinateRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_clampedMapRectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (char)_containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)_vkRegionRestriction;
- (char)isEqualToMapCameraBoundary:(id)a0;
- (char)isValidCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

@end
