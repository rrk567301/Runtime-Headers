@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *longDescription;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, getter=isDeletable) BOOL deletable;

+ (id)fakeRemoteCredentials;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)remoteCredential;
- (BOOL)_isEqualToCredential:(id)a0;
- (BOOL)isRemoteCredential;
- (BOOL)isLocalPassCredential;
- (BOOL)isPeerPaymentCredential;
- (BOOL)isContactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (BOOL)isPurchasedProductCredential;
- (BOOL)isAccountCredential;
- (BOOL)isShareableCredential;
- (BOOL)isIdentityCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (BOOL)isHomeKeyCredential;
- (BOOL)isAppleBalanceCredential;
- (id)localPassCredential;
- (id)peerPaymentCredential;
- (id)contactlessProductCredential;
- (id)digitalIssuanceProductCredential;
- (id)purchasedProductCredential;
- (id)accountCredential;
- (id)shareableCredential;
- (id)identityCredential;
- (id)localAppletSubcredentialPassCredential;
- (id)issuerProvisioningExtensionCredential;
- (id)homeKeyCredential;
- (id)appleBalanceCredential;

@end
