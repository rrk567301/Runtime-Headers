@class NSURL, NSString;

@interface PKPaymentOfferWebServiceSelectedOffer : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
