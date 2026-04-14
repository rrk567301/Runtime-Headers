@class NSURL, NSString, PKPaymentOffersSessionDetails;

@interface PKPaymentOfferWebServiceRewardsBalancesRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (retain, nonatomic) PKPaymentOffersSessionDetails *sessionDetails;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
