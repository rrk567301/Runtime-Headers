@class NSDictionary;

@interface HKSleepDaySummaryDurationCollection : NSObject

@property (readonly, nonatomic) NSDictionary *durations;

+ (id)computeDurationsFromSleepPeriod:(id)a0 sleepDayInterval:(id)a1;
+ (id)computeDurationsFromSleepPeriod:(id)a0 sleepDayInterval:(id)a1 strategies:(id)a2;

- (void).cxx_destruct;
- (id)durationsByAdding:(id)a0;
- (id)durationsForStrategyType:(long long)a0;

@end
