@class NSString;

@interface PKPeerPaymentTransactionAnswerRequest : PKPeerPaymentWebServiceRequest {
    NSString *_accountIdentifier;
    NSString *_transactionIdentifier;
}

@property (nonatomic) unsigned long long questionType;
@property (retain, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithAccountIdentifier:(id)a0 transactionIdentifier:(id)a1;

@end
