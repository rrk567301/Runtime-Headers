@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetReserve;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (double)harvestBudgetReserve;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetRefillDisabled;
+ (BOOL)harvestBudgetDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (id)defaults;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;

- (void).cxx_destruct;
- (id)defaults;
- (id)init;

@end
