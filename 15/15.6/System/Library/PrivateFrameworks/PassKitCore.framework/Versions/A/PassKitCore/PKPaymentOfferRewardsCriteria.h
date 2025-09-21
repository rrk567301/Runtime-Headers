@class NSURL, NSSet;

@interface PKPaymentOfferRewardsCriteria : PKPaymentOfferCriteria <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *redemptionTermsURL;
@property (nonatomic) char supportedDeferredPayments;
@property (nonatomic) char supportedRecurringPayments;
@property (copy, nonatomic) NSSet *supportedCurrencyCodes;
@property (copy, nonatomic) NSSet *minimumAmounts;
@property (copy, nonatomic) NSSet *maximumAmounts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;

@end
