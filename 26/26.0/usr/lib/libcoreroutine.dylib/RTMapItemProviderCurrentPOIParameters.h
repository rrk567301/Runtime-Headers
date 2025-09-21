@interface RTMapItemProviderCurrentPOIParameters : NSObject

@property (readonly, nonatomic) double distanceThreshold;

- (id)init;
- (id)description;
- (id)initWithDistanceThreshold:(double)a0;
- (id)initWithDefaultsManager:(id)a0;

@end
