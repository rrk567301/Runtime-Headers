@class NSString;

@interface PKPaymentProductsActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *productIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
