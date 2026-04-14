@class NSArray, PKPeerPaymentUserInfo, NSString;

@interface PKPeerPaymentUpdateUserInfoRequest : PKPeerPaymentWebServiceRequest {
    NSString *_accountIdentifier;
}

@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) PKPeerPaymentUserInfo *userInfo;

- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 odiAssessment:(id)a4 deviceMetadata:(id)a5;

@end
