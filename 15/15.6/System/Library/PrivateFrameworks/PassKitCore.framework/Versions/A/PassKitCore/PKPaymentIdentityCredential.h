@class NSString, PKIdentityProvisioningAttestations, PKShareablePassMetadata;

@interface PKPaymentIdentityCredential : PKPaymentCredential

@property (readonly, nonatomic) NSString *isoCredentialIdentifier;
@property (readonly, nonatomic) PKShareablePassMetadata *shareableMetadata;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) char hasExistingPassInformation;
@property (copy, nonatomic) NSString *accountKeyIdentifier;
@property (retain, nonatomic) PKIdentityProvisioningAttestations *attestations;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShareablePassMetadata:(id)a0 isoCredentialIdentifier:(id)a1;
- (id)paymentApplications;

@end
