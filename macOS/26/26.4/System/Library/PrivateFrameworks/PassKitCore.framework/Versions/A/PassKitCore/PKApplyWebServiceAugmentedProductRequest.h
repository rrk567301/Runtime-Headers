@class PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceAugmentedProductRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic) unsigned long long feature;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
