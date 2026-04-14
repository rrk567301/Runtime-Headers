@class NSString, PKSecureElementPass;

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKSecureElementPass *pass;

+ (id)requestWithPass:(id)a0;

- (void).cxx_destruct;
- (id)_urlRequestWithBuilder:(id)a0;

@end
