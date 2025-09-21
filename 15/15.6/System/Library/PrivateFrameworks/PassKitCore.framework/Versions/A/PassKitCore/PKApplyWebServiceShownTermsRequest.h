@class NSString, NSURL;

@interface PKApplyWebServiceShownTermsRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsType;
@property (retain, nonatomic) NSURL *baseURL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
