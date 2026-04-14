@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetDisabled;
+ (id)defaults;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (double)harvestBudgetCPUTimeSeconds;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (BOOL)harvestBudgetRefillDisabled;
+ (BOOL)harvestBudgetDisabled;
+ (double)harvestBudgetReserve;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;

- (id)defaults;
- (void).cxx_destruct;
- (id)init;

@end
