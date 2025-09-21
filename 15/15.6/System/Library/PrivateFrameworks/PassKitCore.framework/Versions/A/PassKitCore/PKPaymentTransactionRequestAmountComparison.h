@class PKCurrencyAmount;

@interface PKPaymentTransactionRequestAmountComparison : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) long long comparison;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
