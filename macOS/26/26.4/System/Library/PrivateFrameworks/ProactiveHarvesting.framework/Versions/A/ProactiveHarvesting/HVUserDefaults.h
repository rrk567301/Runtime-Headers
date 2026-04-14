@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)defaults;
+ (id)sharedInstance;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (double)harvestBudgetReserve;
+ (void)setHarvestBudgetReserve:(double)a0;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetDisabled;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;

- (id)defaults;
- (void).cxx_destruct;
- (id)init;

@end
