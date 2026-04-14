@class NSDictionary, PKSpendingInsightTrend;

@interface PKSpendingInsightTrendCollection : NSObject <NSSecureCoding> {
    NSDictionary *_categoryTrends;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKSpendingInsightTrend *overallSpendingTrend;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOverallTrend:(id)a0 categoryTrends:(id)a1;
- (id)spendingTrendForMerchantCategory:(long long)a0;

@end
