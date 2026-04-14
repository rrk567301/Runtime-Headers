@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetReserve;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (id)defaults;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (double)harvestBudgetReserve;
+ (void)resetHarvestBudgetDisabled;
+ (long long)harvestBudgetNumberOfOperations;

- (id)init;
- (id)defaults;
- (void).cxx_destruct;

@end
