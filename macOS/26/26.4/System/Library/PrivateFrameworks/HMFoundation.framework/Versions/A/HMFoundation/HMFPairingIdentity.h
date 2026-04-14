@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) HMFPairingKey *publicKey;
@property (readonly, copy, nonatomic) HMFPairingKey *privateKey;
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;

+ (id)pairingIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;

@end
