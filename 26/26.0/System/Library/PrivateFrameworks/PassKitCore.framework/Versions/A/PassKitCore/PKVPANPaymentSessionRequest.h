@class NSString;

@interface PKVPANPaymentSessionRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *deviceIdentifier;

- (id)initWithDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
