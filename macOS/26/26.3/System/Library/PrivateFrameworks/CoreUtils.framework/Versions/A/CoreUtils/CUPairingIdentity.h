@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *altIRK;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSData *secretKey;

- (id)signData:(id)a0 error:(id *)a1;
- (id)description;
- (void)setRandomKeyPair;
- (BOOL)signDataPtr:(const void *)a0 dataLen:(unsigned long long)a1 signatureBytes:(unsigned char[64])a2 error:(id *)a3;
- (BOOL)verifySignaturePtr:(const void *)a0 signatureLen:(unsigned long long)a1 dataPtr:(const void *)a2 dataLen:(unsigned long long)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)verifySignature:(id)a0 data:(id)a1 error:(id *)a2;

@end
