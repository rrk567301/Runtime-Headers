@class NSString, NSDictionary;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *referrerIdentifier;
@property (retain, nonatomic) NSDictionary *experimentDetails;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_createMutableBody;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithURL:(id)a0;

@end
