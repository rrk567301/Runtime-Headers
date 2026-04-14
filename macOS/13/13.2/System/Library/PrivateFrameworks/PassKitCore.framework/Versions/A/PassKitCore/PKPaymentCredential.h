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
@property (readonly, nonatomic) BOOL supportsSuperEasyProvisioning;

+ (id)fakeRemoteCredentials;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)setupProductIdentifier;
- (BOOL)isRemoteCredential;
- (id)remoteCredential;
- (BOOL)isLocalPassCredential;
- (id)localPassCredential;
- (BOOL)isPeerPaymentCredential;
- (id)peerPaymentCredential;
- (BOOL)isContactlessProductCredential;
- (id)contactlessProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (id)digitalIssuanceProductCredential;
- (BOOL)isPurchasedProductCredential;
- (id)purchasedProductCredential;
- (BOOL)isAccountCredential;
- (id)accountCredential;
- (BOOL)isShareableCredential;
- (id)shareableCredential;
- (BOOL)isIdentityCredential;
- (id)identityCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (id)localAppletSubcredentialPassCredential;
- (BOOL)isIssuerProvisioningExtensionCredential;
- (id)issuerProvisioningExtensionCredential;
- (BOOL)isHomeKeyCredential;
- (id)homeKeyCredential;
- (BOOL)isSafariCredential;
- (id)safariCredential;
- (long long)compare:(id)a0 withBackedUpDefaultPaymentPassSerialNumber:(id)a1;
- (id)underlyingPaymentPass;
- (BOOL)isAppleBalanceCredential;
- (id)appleBalanceCredential;

@end
