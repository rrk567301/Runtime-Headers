@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSString *conversationIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;

@end
