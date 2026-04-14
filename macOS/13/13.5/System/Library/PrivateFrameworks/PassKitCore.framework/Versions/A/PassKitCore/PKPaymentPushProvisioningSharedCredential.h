@class NSString;

@interface PKPaymentPushProvisioningSharedCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifierHash;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (nonatomic) unsigned long long securityOptions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;

@end
