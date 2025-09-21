@class NSString, NSURL;

@interface PKAccountWebServiceDeleteBeneficiaryRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *beneficiaryIdentifier;
@property (copy, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
