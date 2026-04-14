@class NSURL;

@interface PKPaymentOfferWebServiceCatalogRequest : PKPaymentOfferWebServiceRequest

@property (nonatomic) unsigned long long updateReason;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
