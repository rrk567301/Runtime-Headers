@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (id)defaults;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetRefillDisabled:(char)a0;
+ (char)harvestBudgetDisabled;
+ (char)harvestBudgetRefillDisabled;
+ (double)harvestBudgetReserve;
+ (char)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetDisabled:(char)a0;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (id)defaults;

@end
