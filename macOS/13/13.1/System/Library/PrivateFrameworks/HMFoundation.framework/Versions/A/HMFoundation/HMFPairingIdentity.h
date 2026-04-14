@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) HMFPairingKey *publicKey;
@property (readonly, copy, nonatomic) HMFPairingKey *privateKey;
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;

+ (id)pairingIdentity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (id)attributeDescriptions;

@end
