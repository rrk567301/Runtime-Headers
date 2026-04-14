@class PKPayLaterAccountTermsDetails, NSString, NSArray, NSURL, NSDate, NSSet, PKCurrencyAmount, PKPayLaterAccountUserInfo;

@interface PKPayLaterAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (nonatomic) long long cardNetwork;
@property (nonatomic) unsigned long long paymentType;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) PKCurrencyAmount *amountPaid;
@property (copy, nonatomic) PKCurrencyAmount *totalFinanced;
@property (copy, nonatomic) NSDate *nextDueDate;
@property (copy, nonatomic) PKCurrencyAmount *nextDueAmount;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *availableLanguages;
@property (nonatomic) BOOL requiresGenericMessaging;
@property (copy, nonatomic) NSSet *products;
@property (retain, nonatomic) PKPayLaterAccountTermsDetails *termsDetails;
@property (retain, nonatomic) PKPayLaterAccountUserInfo *userInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)currencyCode;
- (id)minimumSinglePurchaseAmount;
- (id)maximumSinglePurchaseAmount;
- (id)perferredLanguageWithMainBundle:(id)a0;
- (id)localizationBundleWithMainBundle:(id)a0;
- (BOOL)hasProvisionedPass;
- (id)productForProductType:(unsigned long long)a0;
- (id)maximumEligibleSpendAmount;
- (BOOL)hasEligibleSpend;
- (BOOL)isPayLaterSupportedInCurrentRegion;

@end
