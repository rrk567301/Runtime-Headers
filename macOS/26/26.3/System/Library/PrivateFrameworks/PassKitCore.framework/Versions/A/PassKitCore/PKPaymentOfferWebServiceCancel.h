@class NSURL, NSString;

@interface PKPaymentOfferWebServiceCancel : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *selectedOfferIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
