@class NSURL;

@interface PKApplyWebServiceApplicationsRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) NSURL *applyServiceURL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
