@interface MKMapCameraZoomRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_bouncesZoom, setter=_setBouncesZoom:) BOOL bouncesZoom;
@property (readonly, nonatomic) double minCenterCoordinateDistance;
@property (readonly, nonatomic) double maxCenterCoordinateDistance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMaxCenterCoordinateDistance:(double)a0;
- (id)initWithMinCenterCoordinateDistance:(double)a0;
- (id)initWithMinCenterCoordinateDistance:(double)a0 maxCenterCoordinateDistance:(double)a1;
- (BOOL)isEqualToMapCameraZoomRange:(id)a0;

@end
