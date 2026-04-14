@class PKPaymentDeviceMetadata, NSString, NSDictionary, NSURL;

@interface PKAccountWebServiceReportDeviceEventRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) long long event;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (copy, nonatomic) NSString *odiAssessment;
@property (copy, nonatomic) NSDictionary *eventDetails;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
