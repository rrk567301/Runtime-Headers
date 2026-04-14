@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (id)defaults;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetDisabled;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetDisabled;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetRefillDisabled;

- (id)init;
- (void).cxx_destruct;
- (id)defaults;

@end
