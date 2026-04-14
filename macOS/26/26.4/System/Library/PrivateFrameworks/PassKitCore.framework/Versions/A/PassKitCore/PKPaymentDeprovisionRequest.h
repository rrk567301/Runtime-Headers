@class NSString;

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPaymentPass:(id)a0;

@end
