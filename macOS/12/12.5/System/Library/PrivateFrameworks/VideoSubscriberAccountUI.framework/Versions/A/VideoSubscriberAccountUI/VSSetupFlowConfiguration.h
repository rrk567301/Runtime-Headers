@class NSString, NSArray, VSIdentityProvider, VSAppDescription, NSDictionary;

@interface VSSetupFlowConfiguration : NSObject

@property (nonatomic) BOOL shouldSkipSetupEntirely;
@property (nonatomic) BOOL shouldOfferAuthenticationFlow;
@property (nonatomic) BOOL shouldOfferSoleAuthenticationFlow;
@property (nonatomic) BOOL shouldOfferSTBAuthenticationFlow;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSString *providerAccountUsername;
@property (copy, nonatomic) NSString *preferredAppID;
@property (retain, nonatomic) VSAppDescription *msoAppDescription;
@property (copy, nonatomic) NSArray *bundlesIDsToConsent;
@property (copy, nonatomic) NSDictionary *vouchersByBundleID;
@property (nonatomic) BOOL canShowSupportedAppsButton;
@property (retain, nonatomic) NSArray *supportedApps;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
