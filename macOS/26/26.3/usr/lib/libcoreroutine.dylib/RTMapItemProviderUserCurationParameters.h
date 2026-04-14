@interface RTMapItemProviderUserCurationParameters : NSObject

@property (readonly, nonatomic) double distanceThreshold;
@property (readonly, nonatomic) double recentCurationOverrideWindow;

- (id)initWithDefaultsManager:(id)a0;
- (id)description;
- (id)init;
- (id)initWithDistanceThreshold:(double)a0 recentCurationOverrideWindow:(double)a1;

@end
