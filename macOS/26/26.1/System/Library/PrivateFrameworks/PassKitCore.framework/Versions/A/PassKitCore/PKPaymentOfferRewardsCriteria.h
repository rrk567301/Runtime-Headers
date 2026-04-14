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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;

@end
