@interface MKMapCameraZoomRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=_bouncesZoom, setter=_setBouncesZoom:) char bouncesZoom;
@property (readonly, nonatomic) double minCenterCoordinateDistance;
@property (readonly, nonatomic) double maxCenterCoordinateDistance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMaxCenterCoordinateDistance:(double)a0;
- (id)initWithMinCenterCoordinateDistance:(double)a0;
- (id)initWithMinCenterCoordinateDistance:(double)a0 maxCenterCoordinateDistance:(double)a1;
- (char)isEqualToMapCameraZoomRange:(id)a0;

@end
