@class PKPaymentSetupProduct;

@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct *_product;
}

@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_generateProduct;

@end
