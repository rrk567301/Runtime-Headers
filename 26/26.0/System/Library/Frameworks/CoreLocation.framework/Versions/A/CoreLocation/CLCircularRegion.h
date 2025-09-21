@interface CLCircularRegion : CLRegion

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } geoCenter;
@property (readonly, nonatomic) double geoRadius;
@property (nonatomic) int geoReferenceFrame;
@property (readonly, nonatomic) BOOL isLowPower;
@property (readonly, nonatomic) double desiredAccuracy;
@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } center;
@property (readonly) double radius;

+ (BOOL)supportsSecureCoding;

- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (void)setReferenceFrame:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 referenceFrame:(int)a2 allowMonitoringWhenNearby:(BOOL)a3 lowPower:(BOOL)a4 identifier:(id)a5 onBehalfOfBundleId:(id)a6 notifyOnEntry:(BOOL)a7 notifyOnExit:(BOOL)a8 emergency:(BOOL)a9;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)description;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2 onBehalfOfBundleId:(id)a3;
- (int)referenceFrame;
- (id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2 nearbyAllowed:(BOOL)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
