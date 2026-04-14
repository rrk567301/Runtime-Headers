@class NSURL, NSString;

@interface PKPaymentOfferWebServicePaymentStatus : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) unsigned long long status;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
