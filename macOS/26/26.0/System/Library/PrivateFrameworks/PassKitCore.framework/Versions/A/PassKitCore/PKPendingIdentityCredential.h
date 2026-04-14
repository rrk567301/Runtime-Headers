@class NSString, PKIdentityProvisioningAttestations;

@interface PKPendingIdentityCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *provisioningCredentialIdentifier;
@property (retain, nonatomic) PKIdentityProvisioningAttestations *attestations;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *accountKeyIdentifier;

- (id)credential;
- (id)type;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForDatabase;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithIdentityCredential:(id)a0;
- (id)initWithShareableMetadata:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
