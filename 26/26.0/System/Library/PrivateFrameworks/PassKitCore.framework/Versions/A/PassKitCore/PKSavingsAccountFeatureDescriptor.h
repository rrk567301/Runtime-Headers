@class NSArray, NSString, NSSet;

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic) unsigned long long transferFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *transferTermsIdentifier;
@property (nonatomic) unsigned long long contactMethod;
@property (nonatomic) BOOL showCreditRewardsHubBalance;
@property (nonatomic) BOOL showCreditDashboardBalance;
@property (nonatomic) BOOL showSettingsBalance;
@property (nonatomic) BOOL hideCreditRewardsHubSignage;
@property (nonatomic) BOOL hideAuthenticationInterstitial;
@property (copy, nonatomic) NSSet *accountLocations;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSavingsAccountFeatureDescriptor:(id)a0;

@end
