@class PKCurrencyAmount;

@interface PKSpendingInsightTrend : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) double percentageChange;
@property (readonly, copy, nonatomic) PKCurrencyAmount *amountChange;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) PKCurrencyAmount *totalSpending;
@property (readonly, copy, nonatomic) PKCurrencyAmount *previousTotalSpending;

+ (double)percentageChangeSteadyThreshold;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)formattedPercentage;
- (id)initWithType:(unsigned long long)a0 direction:(unsigned long long)a1 percentageChange:(double)a2 amountChange:(id)a3 merchantCategory:(long long)a4 totalSpending:(id)a5 previousTotalSpending:(id)a6;

@end
