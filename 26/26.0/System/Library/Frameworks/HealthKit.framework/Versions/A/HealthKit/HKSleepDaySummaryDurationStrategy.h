@class NSDateInterval;

@interface HKSleepDaySummaryDurationStrategy : NSObject

@property (readonly, nonatomic) long long strategyType;
@property (readonly, nonatomic) NSDateInterval *sleepDayInterval;
@property (readonly, nonatomic) NSDateInterval *considerationInterval;

+ (id)bestFitDurationStrategyForSleepDayInterval:(id)a0;
+ (id)bestFitDurationStrategyForSleepDayInterval:(id)a0 considerationInterval:(id)a1;
+ (id)clippedDurationStrategyForSleepDayInterval:(id)a0;
+ (id)completeDurationStrategyForSleepDayInterval:(id)a0;
+ (id)defaultStrategyForSleepDayInterval:(id)a0;
+ (id)standardStrategiesForSleepDayInterval:(id)a0;

- (BOOL)isEqualTo:(id)a0;
- (void).cxx_destruct;
- (id)computeDurationsFromPeriod:(id)a0;
- (id)initWithSleepDayInterval:(id)a0;
- (id)initWithSleepDayInterval:(id)a0 considerationInterval:(id)a1;

@end
