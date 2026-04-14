@class NSString, PKPeerPaymentUserInfo, NSArray, PKDynamicProvisioningPageLearnMoreContent;

@interface PKPeerPaymentUpdateUserInfoResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) PKPeerPaymentUserInfo *userInfo;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (readonly, copy, nonatomic) NSArray *requiredFieldsByPage;
@property (readonly, nonatomic) BOOL useDeviceValidation;
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
