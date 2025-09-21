@class NSString, NSNumber, NSDate;

@interface AMSAccountCachedServerDataFields : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *acAccountName;
@property (nonatomic) unsigned long long accountFlagsVersion;
@property (nonatomic) char autoPlayEnabled;
@property (retain, nonatomic) NSString *combinedStoreFrontID;
@property (retain, nonatomic) NSString *creditBalance;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic) char hasAgreedToAppClipTerms;
@property (nonatomic) char hasAgreedToTerms;
@property (nonatomic) char hasSubscriptionFamilySharingEnabled;
@property (nonatomic) char hasHardwareWatchOffer;
@property (nonatomic) unsigned long long identityLastVerified;
@property (nonatomic) char isAskToBuy;
@property (nonatomic) char isDisabledAccount;
@property (nonatomic) char isInBadCredit;
@property (nonatomic) char isInFamily;
@property (nonatomic) char isInRestrictedRegion;
@property (nonatomic) char isManagedAccount;
@property (nonatomic) char isRestrictedAccount;
@property (retain, nonatomic) NSNumber *isU18OrCountrysEquivalent;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSString *iso2CountryCode;
@property (retain, nonatomic) NSString *iso3CountryCode;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSNumber *oneAccountLinkedDSID;
@property (nonatomic) char personalization;
@property (nonatomic) char retailDemo;
@property (retain, nonatomic) NSString *storefrontId;
@property (nonatomic) char underThirteen;
@property (nonatomic) unsigned long long verifiedExpirationDate;
@property (retain, nonatomic) NSDate *expiration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
