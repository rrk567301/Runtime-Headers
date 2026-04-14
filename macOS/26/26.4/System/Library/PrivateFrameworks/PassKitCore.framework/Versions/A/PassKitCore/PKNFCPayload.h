@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *encryptionPublicKeyData;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) unsigned long long payloadState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithNFCDictionary:(id)a0;
- (BOOL)isEqualToPKNFCPayload:(id)a0;

@end
