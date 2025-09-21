@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

@property (nonatomic) unsigned long long status;
@property (nonatomic) char requiresInteraction;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToPKPeerPaymentPurchaseData:(id)a0;

@end
