@class NSError, NSDate;

@interface CKFlowControl : NSObject {
    unsigned long long _totalSamples;
    double _totalCost;
}

@property (retain, nonatomic) NSError *lastReportableError;
@property double budget;
@property (retain) NSDate *lastRegeneration;
@property unsigned long long budgetCap;
@property double regenerationPerSecond;
@property (nonatomic) double maximumThrottleTime;

+ (id)flowControlWithBudgetCap:(unsigned long long)a0 withMaximumThrottleTime:(double)a1 andRegenerationPerSecond:(double)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBudgetCap:(unsigned long long)a0 withMaximumThrottleTime:(double)a1 andRegenerationPerSecond:(double)a2;
- (void)regenerate;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
- (void)expendWithCost:(double)a0 reportableError:(id)a1;
- (id)CKPropertiesDescription;
- (double)secondsUntilBudgetLimitationRemoved;
- (BOOL)isLimited;
- (BOOL)attemptBudgetedExpenditureWithCost:(double)a0;

@end
