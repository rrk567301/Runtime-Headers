@class NSString, PKPaymentShareableCredential;

@interface PKPendingShareableCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (nonatomic) unsigned long long securityOptions;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) PKPaymentShareableCredential *credential;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)initForDatabase;
- (id)initWithShareableCredential:(id)a0;
- (id)initWithSharedCredential:(id)a0;

@end
