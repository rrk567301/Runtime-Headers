@class NSArray, NSData, NSNumber;

@interface STSMerchantPaymentResponse : STSInAppPaymentResponse

@property (readonly, nonatomic) NSArray *sepCerts;
@property (readonly, nonatomic) NSData *confirmationBlobHash;
@property (readonly, nonatomic) NSData *confirmationBlobSignature;
@property (readonly, nonatomic) NSNumber *confirmationBlobVersion;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromNFECommercePaymentResponse:(id)a0;

@end
