@class NSArray;

@interface PKPaymentPrepareToProvisionRequest : PKPaymentWebServiceRequest {
    NSArray *_credentials;
}

- (id)initWithCredentials:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
