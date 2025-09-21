@class NSData;

@interface PKIdentityProvisioningTransactionKey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *casdAttestation;
@property (readonly, nonatomic) NSData *authorization;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCASDAttestation:(id)a0 authorization:(id)a1;

@end
