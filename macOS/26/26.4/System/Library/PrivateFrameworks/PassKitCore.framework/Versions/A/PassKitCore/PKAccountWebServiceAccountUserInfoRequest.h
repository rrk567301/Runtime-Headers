@class NSString, NSURL, NSArray;

@interface PKAccountWebServiceAccountUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long requestedUserInfo;
@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSString *encryptionVersion;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
