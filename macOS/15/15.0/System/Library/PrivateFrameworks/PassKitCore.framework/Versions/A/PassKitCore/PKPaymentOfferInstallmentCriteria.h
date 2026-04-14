@class NSSet, NSArray, NSString, PKPaymentOfferDynamicContentIcon, NSURL;

@interface PKPaymentOfferInstallmentCriteria : PKPaymentOfferCriteria <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *supportedCurrencyCodes;
@property (copy, nonatomic) NSSet *supportedMerchantCountryCodes;
@property (copy, nonatomic) NSSet *supportedDeviceRegionCountryCodes;
@property (copy, nonatomic) NSArray *supportedLanguages;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) unsigned long long paymentMethodType;
@property (nonatomic) BOOL requiresChallenge;
@property (nonatomic) BOOL suppressPayInFull;
@property (copy, nonatomic) NSString *localizedPayInFullTitleOverride;
@property (copy, nonatomic) NSString *localizedTitleOverride;
@property (copy, nonatomic) NSString *localizedSubtitleOverride;
@property (copy, nonatomic) NSString *programName;
@property (copy, nonatomic) NSString *issuerName;
@property (retain, nonatomic) PKPaymentOfferDynamicContentIcon *icon;
@property (copy, nonatomic) NSArray *minimumAmounts;
@property (copy, nonatomic) NSArray *maximumAmounts;
@property (copy, nonatomic) NSSet *associatedStoreIdentifiers;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *associatedWebDomains;
@property (copy, nonatomic) NSURL *appLaunchURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)eligibleWithConfiguration:(id)a0 ineligibleReason:(unsigned long long *)a1;

@end
