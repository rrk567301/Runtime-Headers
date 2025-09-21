@class NSDictionary, PKSpendingInsightTrend;

@interface PKSpendingInsightTrendCollection : NSObject <NSSecureCoding> {
    NSDictionary *_categoryInsights;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKSpendingInsightTrend *overallSpendingTrend;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasCategoryInsights;
- (id)spendingTrendForMerchantCategory:(long long)a0;

@end
