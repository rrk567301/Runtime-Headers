@class NSString, PKAppleAccountInformation, NSURL, PKPaymentWebService;

@interface PKPaymentWebServiceRequestBuilder : NSObject

@property (weak, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) NSURL *brokerURL;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;

- (id)init;
- (void).cxx_destruct;
- (void)configureOverlayRequest:(id)a0 urlRequest:(id)a1 dictionary:(id)a2;
- (id)initWithBrokerURL:(id)a0 deviceID:(id)a1 appleAccountInformation:(id)a2;

@end
