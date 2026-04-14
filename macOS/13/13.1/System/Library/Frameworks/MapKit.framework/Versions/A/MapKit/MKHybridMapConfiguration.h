@class MKPointOfInterestFilter;

@interface MKHybridMapConfiguration : MKMapConfiguration

@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithElevationStyle:(long long)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (void)updateMapViewState:(id)a0;
- (void)inheritStateFromMapView:(id)a0;
- (id)initWithLandscape:(long long)a0;
- (BOOL)isEqualToHybridMapConfiguration:(id)a0;

@end
