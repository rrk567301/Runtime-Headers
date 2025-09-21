@interface HDDataAggregatorConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) double collectionLatency;
@property (readonly, nonatomic) double aggregationInterval;
@property (readonly, nonatomic) double maximumSeriesDuration;
@property (readonly, nonatomic) char hasActiveWorkout;
@property (nonatomic) char hasForegroundObserver;
@property (nonatomic) char hasBackgroundObserver;

+ (id)configurationWithLatency:(double)a0 interval:(double)a1 seriesDuration:(double)a2 activeWorkout:(char)a3 foregroundObserver:(char)a4 backgroundObserver:(char)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;

@end
