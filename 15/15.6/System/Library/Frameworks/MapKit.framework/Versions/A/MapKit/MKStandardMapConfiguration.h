@class MKPointOfInterestFilter, NSString;

@interface MKStandardMapConfiguration : MKMapConfiguration <MKMapConfigurationHiking>

@property (readonly, nonatomic, getter=_allowsTerrainModePromotion) char allowsTerrainModePromotion;
@property (nonatomic) long long emphasisStyle;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) char showsTraffic;
@property (nonatomic) char showsHiking;
@property (nonatomic) char showsTopographicFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (char)_overlayRequiresModernMap:(id)a0;
+ (char)_overlaySupportsElevation:(id)a0;
+ (char)_overlaysRequireModernMap:(id)a0;
+ (char)_overlaysSupportElevation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (id)initWithElevationStyle:(long long)a0;
- (id)initWithElevationStyle:(long long)a0 emphasisStyle:(long long)a1;
- (id)initWithEmphasisStyle:(long long)a0;
- (char)isEqualToStandardMapConfiguration:(id)a0;

@end
