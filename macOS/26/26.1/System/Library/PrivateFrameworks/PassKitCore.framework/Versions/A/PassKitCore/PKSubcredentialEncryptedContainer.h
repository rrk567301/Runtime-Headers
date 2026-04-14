@class NSString, NSData;

@interface PKSubcredentialEncryptedContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *encryptionScheme;
@property (readonly, nonatomic) NSString *ephemeralPublicKey;
@property (readonly, nonatomic) NSString *publicKeyHash;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *rawEphemeralPublicKey;

- (id)dictionaryRepresentation;
- (id)initWithRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncryptionScheme:(id)a0 ephemeralPublicKey:(id)a1 publicKeyHash:(id)a2 data:(id)a3;

@end
