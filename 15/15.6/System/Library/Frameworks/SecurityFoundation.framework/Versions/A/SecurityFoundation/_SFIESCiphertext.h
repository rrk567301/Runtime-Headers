@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext : _SFCiphertext {
    id _iesCiphertextInternal;
}

@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;
@property (readonly) NSData *authenticationCode;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCiphertext:(id)a0 ephemeralSenderPublicKey:(id)a1 authenticationCode:(id)a2;

@end
