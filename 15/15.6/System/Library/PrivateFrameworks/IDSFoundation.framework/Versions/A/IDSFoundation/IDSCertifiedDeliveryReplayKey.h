@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *payloadHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHash:(id)a0;
- (id)initWithPayload:(id)a0 legacyIdentity:(id)a1;
- (char)isEqualToReplayKey:(id)a0;

@end
