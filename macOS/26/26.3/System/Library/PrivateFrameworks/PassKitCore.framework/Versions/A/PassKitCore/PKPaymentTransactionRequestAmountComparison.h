@class PKCurrencyAmount;

@interface PKPaymentTransactionRequestAmountComparison : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) long long comparison;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
