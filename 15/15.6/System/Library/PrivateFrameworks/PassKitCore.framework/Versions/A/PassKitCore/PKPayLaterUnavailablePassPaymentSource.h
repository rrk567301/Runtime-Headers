@class PKPayLaterFinancingPlanFundingSource;

@interface PKPayLaterUnavailablePassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithFundingSource:(id)a0;

@end
