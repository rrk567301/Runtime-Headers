@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *encryptionPublicKeyData;
@property (nonatomic) BOOL requiresAuthentication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPKNFCPayload:(id)a0;
- (id)initWithNFCDictionary:(id)a0;

@end
