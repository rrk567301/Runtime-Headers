@class NSDate, PKCurrencyAmount;

@interface PKPaymentOfferInstallmentFeeDetailItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKCurrencyAmount *feeAmount;
@property (readonly, nonatomic) PKCurrencyAmount *totalFees;
@property (readonly, nonatomic) unsigned long long feesPeriod;
@property (readonly, nonatomic) long long feesInterval;
@property (readonly, copy, nonatomic) NSDate *feeDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
