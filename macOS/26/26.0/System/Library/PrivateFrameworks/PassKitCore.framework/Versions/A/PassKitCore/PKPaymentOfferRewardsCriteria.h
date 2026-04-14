@class NSURL, NSSet;

@interface PKPaymentOfferRewardsCriteria : PKPaymentOfferCriteria <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *redemptionTermsURL;
@property (nonatomic) BOOL supportedDeferredPayments;
@property (nonatomic) BOOL supportedRecurringPayments;
@property (copy, nonatomic) NSSet *supportedCurrencyCodes;
@property (copy, nonatomic) NSSet *supportedMerchantCountryCodes;
@property (copy, nonatomic) NSSet *minimumAmounts;
@property (copy, nonatomic) NSSet *maximumAmounts;
@property (copy, nonatomic) NSSet *userEnteredMinimumAmounts;
@property (copy, nonatomic) NSSet *userEnteredMaximumAmounts;
@property (nonatomic) double selectedOfferStickyDuration;
@property (nonatomic) double selectedOfferActiveDuration;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;

@end
