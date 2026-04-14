@class NSData;

@interface SESShortLivedKeySignResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *signature;
@property (readonly) NSData *ptAttestation;
@property (readonly) NSData *casdCertificate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSignature:(id)a0 ptAttestation:(id)a1 casdCertificate:(id)a2;

@end
