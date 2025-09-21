@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *encryptionPublicKeyData;
@property (nonatomic) char requiresAuthentication;
@property (nonatomic) unsigned long long payloadState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNFCDictionary:(id)a0;
- (char)isEqualToPKNFCPayload:(id)a0;

@end
