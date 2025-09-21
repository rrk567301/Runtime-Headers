@class PKPaymentDeviceMetadata, NSString, PKApplyWebServiceRequestAuthenticationContext, NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *applicationTermsIdentifier;
@property (copy, nonatomic) NSString *offerTermsIdentifier;
@property (copy, nonatomic) NSString *pathTermsIdentifier;
@property (copy, nonatomic) NSString *pathIdentifier;
@property (nonatomic) char termsAccepted;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (copy, nonatomic) NSString *odiAssessment;
@property (retain, nonatomic) PKApplyWebServiceRequestAuthenticationContext *authenticationContext;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
