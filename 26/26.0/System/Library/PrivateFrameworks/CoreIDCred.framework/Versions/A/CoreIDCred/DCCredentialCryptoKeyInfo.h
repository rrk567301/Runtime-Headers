@class NSString, NSData, NSDate;

@interface DCCredentialCryptoKeyInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSData *publicKeyIdentifier;
@property (readonly, nonatomic) NSString *keyType;
@property (readonly, nonatomic) NSString *keyUsage;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long presentmentKeyTimesUsed;
@property (readonly, nonatomic) NSData *acl;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 credentialIdentifier:(id)a1 publicKey:(id)a2 publicKeyIdentifier:(id)a3 keyType:(id)a4 keyUsage:(id)a5 createdAt:(id)a6 updatedAt:(id)a7 presentmentKeyTimesUsed:(long long)a8 acl:(id)a9;

@end
