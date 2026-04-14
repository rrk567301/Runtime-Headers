@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetRefillDisabled;
+ (double)harvestBudgetReserve;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetDisabled;
+ (id)defaults;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)defaults;

@end
