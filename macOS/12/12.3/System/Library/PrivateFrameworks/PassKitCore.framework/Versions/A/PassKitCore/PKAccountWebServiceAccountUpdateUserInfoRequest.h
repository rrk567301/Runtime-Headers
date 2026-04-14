@class NSString, CNContact, NSURL, NSArray;

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *ssn;
@property (retain, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) unsigned long long featureIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
