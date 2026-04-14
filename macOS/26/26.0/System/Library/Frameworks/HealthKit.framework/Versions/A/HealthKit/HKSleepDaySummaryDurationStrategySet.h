@class NSDictionary;

@interface HKSleepDaySummaryDurationStrategySet : NSObject {
    NSDictionary *_strategies;
}

- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStrategies:(id)a0;
- (BOOL)containsStrategy:(id)a0;
- (id)strategyForType:(long long)a0;

@end
