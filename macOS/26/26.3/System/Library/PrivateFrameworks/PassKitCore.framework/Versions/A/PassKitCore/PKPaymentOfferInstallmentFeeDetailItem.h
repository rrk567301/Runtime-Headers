@class NSDate, PKCurrencyAmount;

@interface PKPaymentOfferInstallmentFeeDetailItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKCurrencyAmount *feeAmount;
@property (retain, nonatomic) PKCurrencyAmount *totalFees;
@property (nonatomic) unsigned long long feesPeriod;
@property (nonatomic) long long feesInterval;
@property (copy, nonatomic) NSDate *feeDate;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
