@class NSArray, NSData, NSNumber;

@interface STSMerchantPaymentResponse : STSInAppPaymentResponse

@property (readonly, nonatomic) NSArray *sepCerts;
@property (readonly, nonatomic) NSData *confirmationBlobHash;
@property (readonly, nonatomic) NSData *confirmationBlobSignature;
@property (readonly, nonatomic) NSNumber *confirmationBlobVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromNFECommercePaymentResponse:(id)a0;

@end
