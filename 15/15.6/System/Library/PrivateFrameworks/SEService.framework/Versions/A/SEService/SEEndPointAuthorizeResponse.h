@class NSData;

@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *endPointAttestationData;
@property (retain, nonatomic) NSData *encryptedData;
@property (retain, nonatomic) NSData *encryptionPublicKeyData;

+ (id)responseWithEndPointAttestationData:(id)a0 encryptionPublicKeyData:(id)a1 encryptedData:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
