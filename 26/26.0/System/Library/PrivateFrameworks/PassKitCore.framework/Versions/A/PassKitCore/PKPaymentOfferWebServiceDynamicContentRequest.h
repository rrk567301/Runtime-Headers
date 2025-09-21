@class NSURL, NSString, NSArray;

@interface PKPaymentOfferWebServiceDynamicContentRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (nonatomic) unsigned long long context;
@property (copy, nonatomic) NSArray *types;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
