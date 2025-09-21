@class NSArray, NSSet, NSString, PKPaymentOfferDynamicContentIcon, PKApplyFooterContent, NSURL;

@interface PKPaymentOfferInstallmentCriteria : PKPaymentOfferCriteria <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedCurrencyCodes;
@property (copy, nonatomic) NSSet *supportedMerchantCountryCodes;
@property (copy, nonatomic) NSSet *supportedDeviceRegionCountryCodes;
@property (copy, nonatomic) NSArray *supportedLanguages;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) unsigned long long paymentMethodType;
@property (nonatomic) BOOL requiresChallenge;
@property (nonatomic) BOOL suppressPayInFull;
@property (nonatomic) BOOL hasPreconfiguredOffers;
@property (nonatomic) BOOL hasDefaultPlan;
@property (nonatomic) BOOL requiresInStorePlanSelection;
@property (nonatomic) BOOL isHandoff;
@property (copy, nonatomic) NSString *localizedPayInFullTitleOverride;
@property (copy, nonatomic) NSString *localizedPayInFullSubtitleOverride;
@property (copy, nonatomic) NSString *localizedTitleOverride;
@property (copy, nonatomic) NSString *localizedSubtitleOverride;
@property (copy, nonatomic) NSString *programName;
@property (copy, nonatomic) NSString *issuerName;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIcon *icon;
@property (retain, nonatomic) PKApplyFooterContent *disclosureFooter;
@property (copy, nonatomic) NSString *merchandisingIdentifier;
@property (copy, nonatomic) NSSet *minimumAmounts;
@property (copy, nonatomic) NSSet *maximumAmounts;
@property (nonatomic) double setupAfterPurchaseStickyDuration;
@property (nonatomic) double setupAfterPurchaseActiveDuration;
@property (copy, nonatomic) NSSet *associatedStoreIdentifiers;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *associatedWebDomains;
@property (copy, nonatomic) NSURL *appLaunchURL;

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
- (id)preferredCurrencyCode;

@end
