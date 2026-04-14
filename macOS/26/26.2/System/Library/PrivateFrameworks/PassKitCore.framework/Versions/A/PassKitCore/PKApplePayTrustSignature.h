@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, copy, nonatomic) NSData *paymentData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSignatureRequest:(id)a0 signature:(id)a1;

@end
