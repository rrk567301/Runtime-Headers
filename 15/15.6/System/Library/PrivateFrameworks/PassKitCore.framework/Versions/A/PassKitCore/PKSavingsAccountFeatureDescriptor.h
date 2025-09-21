@class NSArray, NSString, NSSet;

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic) unsigned long long transferFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *transferTermsIdentifier;
@property (nonatomic) unsigned long long contactMethod;
@property (nonatomic) char showCreditRewardsHubBalance;
@property (nonatomic) char showCreditDashboardBalance;
@property (nonatomic) char showSettingsBalance;
@property (nonatomic) char hideCreditRewardsHubSignage;
@property (nonatomic) char hideAuthenticationInterstitial;
@property (copy, nonatomic) NSSet *accountLocations;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToSavingsAccountFeatureDescriptor:(id)a0;

@end
