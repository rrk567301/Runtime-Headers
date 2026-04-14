@class NSArray, PKCurrencyAmount;

@interface PKPaymentOfferInstallmentFeeDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *totalFeeAmount;
@property (copy, nonatomic) NSArray *feeItems;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
