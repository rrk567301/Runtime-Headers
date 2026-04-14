@class NSURL;

@interface PKPaymentOfferWebServiceCatalogRequest : PKPaymentOfferWebServiceRequest

@property (nonatomic) unsigned long long updateReason;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
