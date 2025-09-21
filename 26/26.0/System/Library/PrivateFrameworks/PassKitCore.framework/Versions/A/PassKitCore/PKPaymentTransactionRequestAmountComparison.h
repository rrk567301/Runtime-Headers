@class PKCurrencyAmount;

@interface PKPaymentTransactionRequestAmountComparison : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) long long comparison;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
