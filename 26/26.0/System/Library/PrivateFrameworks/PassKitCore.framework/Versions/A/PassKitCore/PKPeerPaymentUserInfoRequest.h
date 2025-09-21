@class NSString, NSDate;

@interface PKPeerPaymentUserInfoRequest : PKPeerPaymentWebServiceRequest {
    NSString *_accountIdentifier;
    NSDate *_lastUpdated;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithAccountIdentifier:(id)a0 lastUpdated:(id)a1;

@end
