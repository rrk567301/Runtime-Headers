@class NSString, PKIdentityProvisioningAttestations;

@interface PKPendingIdentityCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *provisioningCredentialIdentifier;
@property (retain, nonatomic) PKIdentityProvisioningAttestations *attestations;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *accountKeyIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (id)initForDatabase;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithIdentityCredential:(id)a0;
- (id)initWithShareableMetadata:(id)a0;
- (char)representsCredential:(id)a0;

@end
