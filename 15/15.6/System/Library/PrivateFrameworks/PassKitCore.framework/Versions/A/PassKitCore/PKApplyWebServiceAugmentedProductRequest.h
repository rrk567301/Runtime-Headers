@class PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceAugmentedProductRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
