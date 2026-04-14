@class PKAccountPaymentFundingSource;

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)identifier;
- (id)initWithAccountPaymentFundingSource:(id)a0;

@end
