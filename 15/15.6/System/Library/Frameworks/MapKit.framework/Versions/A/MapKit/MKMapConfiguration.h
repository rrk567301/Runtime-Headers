@class MKPointOfInterestFilter;

@interface MKMapConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char _showsTraffic;
@property (nonatomic) char _showsHiking;
@property (nonatomic) char _showsTopographicFeatures;
@property (copy, nonatomic) MKPointOfInterestFilter *_pointOfInterestFilter;
@property (nonatomic) long long elevationStyle;

+ (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; char x6; })_cartographicConfigurationForMapConfiguration:(id)a0;
+ (id)_mapConfigurationWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; char x6; })a0;
+ (id)_potentiallyLossy_mapConfigurationWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; char x6; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (void)_setInternalStateFromMapConfiguration:(id)a0;
- (id)initWithElevationStyle:(long long)a0;

@end
