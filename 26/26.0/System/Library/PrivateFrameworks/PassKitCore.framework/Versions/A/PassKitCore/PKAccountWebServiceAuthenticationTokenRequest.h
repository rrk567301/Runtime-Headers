@class NSString, NSURL;

@interface PKAccountWebServiceAuthenticationTokenRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
