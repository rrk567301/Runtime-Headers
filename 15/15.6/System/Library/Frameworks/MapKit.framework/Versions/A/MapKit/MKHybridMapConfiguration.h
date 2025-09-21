@class MKPointOfInterestFilter;

@interface MKHybridMapConfiguration : MKMapConfiguration

@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) char showsTraffic;

+ (char)supportsSecureCoding;

- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithElevationStyle:(long long)a0;
- (char)isEqualToHybridMapConfiguration:(id)a0;

@end
