@class NSData, NSString;

@interface DCCredentialAuthorizationToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *credentialAuthorizationToken;
@property (readonly, nonatomic) NSString *credentialPairingID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredentialAuthorizationToken:(id)a0 pairingID:(id)a1;

@end
