@class NSNumber, NSData;

@interface SESLegacyKeyCreateResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *keySlot;
@property (retain, nonatomic) NSData *publicKeyData;
@property (retain, nonatomic) NSData *CASDSignature;
@property (retain, nonatomic) NSData *legacyKeyAttestation;

+ (id)withPublicKeyData:(id)a0 CASDSignature:(id)a1 keySlot:(id)a2 legacyKeyAttestation:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
