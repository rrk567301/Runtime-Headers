@class NSString, NSURL;

@interface PKAccountWebServicePayLaterContentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)contextString;

@end
