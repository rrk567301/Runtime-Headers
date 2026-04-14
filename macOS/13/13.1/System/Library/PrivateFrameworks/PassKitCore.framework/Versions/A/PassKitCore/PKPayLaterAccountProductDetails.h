@class PKCurrencyAmount, NSTimeZone;

@interface PKPayLaterAccountProductDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSTimeZone *productTimeZone;
@property (retain, nonatomic) PKCurrencyAmount *minimumSinglePurchaseAmount;
@property (retain, nonatomic) PKCurrencyAmount *maximumSinglePurchaseAmount;
@property (retain, nonatomic) PKCurrencyAmount *currentBalance;
@property (retain, nonatomic) PKCurrencyAmount *totalFinanced;
@property (retain, nonatomic) PKCurrencyAmount *amountPaid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
